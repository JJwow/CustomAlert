//
//  CBDUnifiedAlertView.m
//  CBDCustomAlertView
//
//  Created by 王俊杰 on 2020/1/15.
//  Copyright © 2020 王俊杰. All rights reserved.
//

#import "CBDUnifiedAlertView.h"
#import "Masonry.h"
#import "BillUninvoiceAlertView.h"
@interface CBDUnifiedAlertView ()

@property (nonatomic, strong) CustomAlertBaseViewT *contentView;

@end

@implementation CBDUnifiedAlertView
-(instancetype)init{
    self = [super init];
    if (self) {
        self.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0];
        UIButton *btn = [[UIButton alloc]init];
        [btn addTarget:self action:@selector(hideAction) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:btn];
        [btn mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self).with.insets(UIEdgeInsetsMake(0, 0, 0, 0));
        }];
    }
    return self;
}
- (void)hideAction{
    [self.contentView close];
}
+ (CustomAlertBaseViewT *)configWithUninvoiceList:(NSArray *)uninvoiceList
                                         sEventId:(NSString *)sEventId
                                         parentVC:(UIViewController *)parentVC
                                       closeBlock:(CloseFinishBlock)closeBlock{
    CBDUnifiedAlertView *backView = [[CBDUnifiedAlertView alloc]init];
    BillUninvoiceAlertView *uninvoiceAlertView = [BillUninvoiceAlertView config:sEventId parentVC:parentVC closeBlock:closeBlock];
    [uninvoiceAlertView configViewWithUninvoiceList:uninvoiceList];
    backView.contentView = uninvoiceAlertView;
    uninvoiceAlertView.vBack = backView;
    return uninvoiceAlertView;
}
-(void)dealloc{
    NSLog(@"");
}
@end
