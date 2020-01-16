//
//  PublicMethod.h
//  CarBaDa
//
//  Created by admin on 15/10/9.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PublicMethod : NSObject

//序列化
+(nullable NSDictionary*)objectToDictionary:(nullable id)object;
//反序列化
+(nullable id)dictionaryToObject:(nonnull NSString*)classname dic:(nonnull NSDictionary*)dic;
//批量存储
+(void)saveUserDefault:(nonnull NSArray*)array keyArray:(nonnull NSArray*)keyArray;

//计算字符串尺寸
+(CGFloat)getHeightWithWidth:(CGFloat)width text:(nullable NSString *)text font:(nonnull UIFont *)font;
+(CGFloat)getWidthWithHeight:(CGFloat)height text:(nullable NSString *)text font:(nonnull UIFont *)font;

/// 普通拨打，注：会去除电话号码中的符号
/// @param phoneNum 电话号码
+ (void)callPhone:(NSString *_Nonnull)phoneNum;

/// 直接拨打电话
/// @param phoneNum 电话号码
+ (void)callPhoneDirect:(NSString *_Nonnull)phoneNum;
/**
 *  算出离日期最近的指定星期的日期
 *
 *  @param date 传入当前的日期
 *  @param date 传入指定的星期几(weekday就是星期几，1代表星期日，2代表星期一，后面依次)
 *  @return 字典 @{@"xxx":@"xxxxx",@"yyy":@"yyyy"}
 */

+(nonnull NSDate*)dateToSeldate:(nonnull NSDate*)date week:(int)week;

/*比较日期，精确到日,忽略时分秒*/
+ (NSComparisonResult)compareDate:(nullable NSDate *)compareDate toDate:(nullable NSDate *)toDate;

//jsonstring转字典
+(nullable NSDictionary *)dictionaryWithJsonString:(nonnull NSString *)jsonString;

//景区列表页拼接
+(nullable NSString *)journeyUrlString:(nonnull NSString *)sUrl;

/**
 *  计算高度
 *  @param width 固定宽度
 *  @param text 文本
 *  @param font 字体大小
 *  @param lineSpace 行间距
 *  @return 高度
 */
+(CGFloat)getAttributedStringHeightWithWidth:(CGFloat)width text:(nullable NSString *)text font:(nonnull UIFont *)font lineSpace:(CGFloat)lineSpace;
/**
 *  可变富文本
 *  @param string 文本
 *  @param lineSpace 行间距
 *  @return 富文本
 */
+ (NSAttributedString *_Nullable)getAttributedStringWithString:(NSString *_Nullable)string lineSpace:(CGFloat)lineSpace;

/**
 *  可变富文本高度
 *  @param text 文本
 *  @param lineSpace 行间距
 *  @return 高度
 */

+(CGFloat)getAttributedStringWidth:(CGFloat)hight text:(nullable NSString *)text font:(nonnull UIFont *)font lineSpace:(CGFloat)lineSpace;

+(CGFloat)getAttributedStringHight:(CGFloat)width attrStr:(NSMutableAttributedString *_Nullable)attrStr;

+(CGFloat)getAttributedStringWidth:(CGFloat)height attrStr:(NSMutableAttributedString *_Nullable)attrStr;

@end
