//
//  BillUninvoiceAlertView.m
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "BillUninvoiceAlertView.h"
#import "ResponseGetEIInfo.h"
#import "PublicMethod.h"
#import "TCFoundation.h"
@interface BillUninvoiceAlertView()

@property (nonatomic, assign) float fContentHeight;

@end

@implementation BillUninvoiceAlertView

+ (BillUninvoiceAlertView *)config:(NSString *)sEventId parentVC:(UIViewController *)parentVC closeBlock:(CloseFinishBlock)closeBlock{
    NSString *path = [[NSBundle mainBundle] pathForResource:@"CBDCustomAlertView" ofType:@"framework"];
    NSString *bundlePaht = [[NSBundle bundleWithPath:path] pathForResource:@"CustomAlertView" ofType:@"bundle"];
    NSBundle *myBundle = [NSBundle bundleWithPath:bundlePaht];
    __block BillUninvoiceAlertView *billUninvoiceAlertView = [myBundle loadNibNamed:@"BillUninvoiceAlertView" owner:nil options:nil].firstObject;
    billUninvoiceAlertView.parentVC = parentVC;
    billUninvoiceAlertView.sEventId = sEventId;
    billUninvoiceAlertView.closeFinishBlock = ^{
        if (closeBlock) {
            closeBlock();
        }
         billUninvoiceAlertView = nil;
    };
    return billUninvoiceAlertView;
}

- (void)configViewWithUninvoiceList:(NSArray *)uninvoiceListArray{
    [self configBaseViewWithParentView:self.parentVC.view.window bCloseOnTouchUpOutside:YES closeBlock:self.closeOnTouchUpOutsideBlock];
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = 12;
    for (UIView *v in [self.contentBackView subviews]) {
        [v removeFromSuperview];
    }
    float fY = 0;
    for (uninvoiceList *uninvoice in uninvoiceListArray) {
        NSString *sContent = [NSString stringWithFormat:@"%@:  %@",uninvoice.title,uninvoice.remark];
        NSMutableAttributedString *att = [self subStringComponents:sContent];
        [att addAttributes:@{NSFontAttributeName:font_Info_Bold,NSForegroundColorAttributeName:def_text_Primary} range:NSMakeRange(0, uninvoice.title.length + 1)];
        float fHeight = [PublicMethod getAttributedStringHight:238 attrStr:att];
        UILabel *lblContent = [[UILabel alloc]initWithFrame:CGRectMake(0, fY, 238, fHeight)];
        lblContent.numberOfLines = 0;
        lblContent.attributedText = att;
        [self.contentBackView addSubview:lblContent];
        fY += fHeight;
        fY += 10;
    }
    self.fContentHeight = 116 + fY;
}

/**
 处理特殊字符串

 @return NSMutableAttributedString
 */
- (NSMutableAttributedString *)subStringComponents:(NSString *)sContent{
    NSArray *arrStr = [sContent componentsSeparatedByString:@"#"];
    NSMutableParagraphStyle *para = [[NSMutableParagraphStyle alloc]init];
    para.lineSpacing = 3;
    NSString *sAtt = [sContent stringByReplacingOccurrencesOfString:@"#" withString:@""];
    NSMutableAttributedString *att = [[NSMutableAttributedString alloc]initWithString:sAtt attributes:@{NSFontAttributeName:font_Info,NSForegroundColorAttributeName:def_text_Secondary,NSParagraphStyleAttributeName:para}];
    for (int i = 0; i < arrStr.count; i ++) {
        if (i != 0 && i != arrStr.count - 1) {
            NSRange range = [sAtt rangeOfString:arrStr[i]];
            [att addAttribute:NSForegroundColorAttributeName value:def_color_Red range:range];
        }
    }
    return att;
}

-(float)getWidth{
    return 278;
}

-(float)getHeight{
    return self.fContentHeight;
}

- (IBAction)didPressedClose:(id)sender {
    [self close];
}
-(void)dealloc{
    NSLog(@"");
}
@end
