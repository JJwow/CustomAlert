//
//  PublicMethod.m
//  CarBaDa
//
//  Created by admin on 15/10/9.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "PublicMethod.h"
#import <objc/runtime.h>
#import "NSObject+NetworkEngineParse.h"
#import "IDJCalendarUtil.h"
#import "TCDateFormatter.h"
#import "NSDate+Utility.h"
#import "NSUserDefault+Extend.h"
#import "OpenUrlToPage.h"
#import "UserMember.h"
#import "NSString+FormatNumber.h"

@implementation PublicMethod

+(nullable NSDictionary*)objectToDictionary:(nullable id)object{
    
    NSDictionary * dic = [object propertyDictionary];
    
    return  dic;
}

////改进的反序列化
//+(nullable id)dicToObjc:(nonnull NSDictionary*)dic{
//    if(dic&&dic.allKeys.count)
//    {
//        for(NSString* key in dic.allKeys)
//        {
//            Class cls=NSClassFromString(key);
//            if(cls)
//            {
//                //判断valve的属性
//                id value = [dic valueForKey:key];
//                if([value isKindOfClass:[NSDictionary class]])
//                {
//
//                }else
//                {
//
//                }
//            }
//        }
//    }
//    return nil;
//}

+(nullable id)dictionaryToObject:(nonnull NSString*)classname dic:(nonnull NSDictionary*)dic
{
    Class c = NSClassFromString(classname);
    return [c tc_objectWithDictionary:dic];
}

+(void)saveUserDefault:(nonnull NSArray*)array keyArray:(nonnull NSArray*)keyArray
{
    if(array && keyArray && array.count>0 && keyArray.count>0 && array.count==keyArray.count)
    {
        for(int i=0;i<array.count;i++)
        {
            [[NSUserDefaults standardUserDefaults] setValue:array[i] forKey:keyArray[i]];
        }
    }
    [[NSUserDefaults standardUserDefaults] synchronize];
}

+(CGFloat)getHeightWithWidth:(CGFloat)width text:(nullable NSString *)text font:(nonnull UIFont *)font
{
    CGRect rect = [text boundingRectWithSize:CGSizeMake(width, MAXFLOAT)
                                     options:NSStringDrawingTruncatesLastVisibleLine | NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                  attributes:@{NSFontAttributeName:font}
                                     context:nil];
    return rect.size.height;
}

+(CGFloat)getWidthWithHeight:(CGFloat)height text:(nullable NSString *)text font:(nonnull UIFont *)font
{
    CGRect rect = [text boundingRectWithSize:CGSizeMake(MAXFLOAT, height)
                                     options:NSStringDrawingTruncatesLastVisibleLine | NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                  attributes:@{NSFontAttributeName:font}
                                     context:nil];
    return rect.size.width;
}

+(CGFloat)getAttributedStringHeightWithWidth:(CGFloat)width text:(nullable NSString *)text font:(nonnull UIFont *)font lineSpace:(CGFloat)lineSpace
{
    
    NSMutableAttributedString *attributedString = [[PublicMethod getAttributedStringWithString:text lineSpace:lineSpace] mutableCopy];
    
    CGSize maxSize = CGSizeMake(width, MAXFLOAT);
    
    //设定attributedString的字体及大小，一定要设置这个，否则计算出来的height是非常不准确的
    
    [attributedString addAttribute:NSFontAttributeName value:font range:NSMakeRange(0, [text length])];
    
    //计算attributedString的rect
    
    CGRect contentRect = [attributedString boundingRectWithSize:maxSize options:NSStringDrawingUsesLineFragmentOrigin context:nil];
    
    return contentRect.size.height;
}

+(CGFloat)getAttributedStringWidth:(CGFloat)hight text:(nullable NSString *)text font:(nonnull UIFont *)font lineSpace:(CGFloat)lineSpace
{
    
    NSMutableAttributedString *attributedString = [[PublicMethod getAttributedStringWithString:text lineSpace:lineSpace] mutableCopy];
    
    CGSize maxSize = CGSizeMake(MAXFLOAT, hight);
    
    //设定attributedString的字体及大小，一定要设置这个，否则计算出来的height是非常不准确的
    
    [attributedString addAttribute:NSFontAttributeName value:font range:NSMakeRange(0, [text length])];
    
    //计算attributedString的rect
    
    CGRect contentRect = [attributedString boundingRectWithSize:maxSize options:NSStringDrawingUsesLineFragmentOrigin context:nil];
    
    return contentRect.size.width;
}

+ (NSAttributedString *)getAttributedStringWithString:(NSString *)string lineSpace:(CGFloat)lineSpace {
    
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:string];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    paragraphStyle.lineSpacing = lineSpace; // 调整行间距
    NSRange range = NSMakeRange(0, [string length]);
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:range];
    
    return attributedString;
}

+(CGFloat)getAttributedStringHight:(CGFloat)width attrStr:(NSMutableAttributedString *_Nullable)attrStr{
     CGRect contentRect = [attrStr boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading context:nil];
    return contentRect.size.height;
}

+(CGFloat)getAttributedStringWidth:(CGFloat)height attrStr:(NSMutableAttributedString *_Nullable)attrStr{
    CGRect contentRect = [attrStr boundingRectWithSize:CGSizeMake(MAXFLOAT, height) options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading context:nil];
    return contentRect.size.width;
}

+(nonnull NSDate*)dateToSeldate:(nonnull NSDate*)date week:(int)week{
    NSDateComponents *componets = [[NSCalendar autoupdatingCurrentCalendar] components:NSCalendarUnitWeekday fromDate:date];
    int weekday = (int)[componets weekday];//weekday就是星期几，1代表星期日，2代表星期一，后面依次
    if(weekday!=week)
    {
        if(weekday>week)//挪到下周的指定week
        {
            date=[IDJCalendarUtil getDateFrom:date AfterDays:(7-weekday+week)];
        }else//直接往后挪天数就行
        {
            date=[IDJCalendarUtil getDateFrom:date AfterDays:(week-weekday)];
        }
    }
    return date;
}

+ (void)callPhone:(NSString *)phoneNum
{
    if (phoneNum.length == 0) {
        return;
    }

    NSString *callPhone = [NSString stringWithFormat:@"tel:%@", [phoneNum dealwithPhoneNum]];
    NSURL *telUrl = [NSURL URLWithString:callPhone];
    if (iOS10) {
        [[UIApplication sharedApplication] openURL:telUrl options:@{} completionHandler:^(BOOL success) {
            
        }];
    } else {
        [[UIApplication sharedApplication] openURL:telUrl];
    }
}

+ (void)callPhoneDirect:(NSString *_Nonnull)phoneNum
{
    if (phoneNum.length == 0) {
        return;
    }

    NSString *callPhone = [NSString stringWithFormat:@"tel:%@", phoneNum];
    NSURL *telUrl = [NSURL URLWithString:callPhone];
    if (iOS10) {
        [[UIApplication sharedApplication] openURL:telUrl options:@{} completionHandler:^(BOOL success) {
            
        }];
    } else {
        [[UIApplication sharedApplication] openURL:telUrl];
    }
}

//比较时间大小
+ (NSComparisonResult)compareDate:(NSDate *)compareDate toDate:(NSDate *)toDate {
    
    int year = [IDJCalendarUtil yearOfDate:compareDate];
    int month=[IDJCalendarUtil monthOfDate:compareDate];
    int day = [IDJCalendarUtil dayOfDate:compareDate];
    
    int cyear = [IDJCalendarUtil yearOfDate:toDate];
    int cmonth=[IDJCalendarUtil monthOfDate:toDate];
    int cday = [IDJCalendarUtil dayOfDate:toDate];
    
    if(year<cyear)
    {
        return NSOrderedAscending;
    }else if(year>cyear)
    {
        return NSOrderedDescending;
    }else
    {
        //比较月
        if(month<cmonth)
        {
            return NSOrderedAscending;
        }else if(month>cmonth)
        {
            return NSOrderedDescending;
        }else
        {
            //比较天
            if(day<cday)
            {
                return NSOrderedAscending;
            }else if (day>cday)
            {
                return NSOrderedDescending;
            }else
            {
                return NSOrderedSame;
            }
        }
    }
}

//jsonstring转字典
+(NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString{
    if (jsonString == nil) {
        return nil;
    }
    
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    NSError *err;
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:jsonData
                                                        options:NSJSONReadingMutableContainers
                                                          error:&err];
    if(err) {
        NSLog(@"json解析失败：%@",err);
        return nil;
    }
    return dic;
}

//景区列表页拼接
+(nullable NSString *)journeyUrlString:(nonnull NSString *)sUrl{
    NSMutableDictionary* dic=[[OpenUrlToPage dictionaryWithUrl:sUrl] mutableCopy];
    if(dic&&[dic.allKeys containsObject:@"uid"])
    {
        dic[@"uid"]=[UserMember getInstance].memberId;
        NSURL* url=[NSURL URLWithString:sUrl];
        NSString* scheme=[NSString stringWithFormat:@"%@://%@%@",url.scheme,url.host,url.path];
        for(int i=0;i<dic.allKeys.count;i++)
        {
            if(i==0)
            {
                scheme=[scheme stringByAppendingString:@"?"];
            }
            scheme=[scheme stringByAppendingString:[NSString stringWithFormat:@"%@=%@",dic.allKeys[i],dic[dic.allKeys[i]]]];
            if(i!=dic.allKeys.count-1)
            {
                scheme=[scheme stringByAppendingString:@"&"];
            }
        }
        return scheme;
    }else
    {
        return sUrl;
    }
}

@end
