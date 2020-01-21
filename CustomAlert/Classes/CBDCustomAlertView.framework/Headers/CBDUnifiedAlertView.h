//
//  CBDUnifiedAlertView.h
//  CBDCustomAlertView
//
//  Created by 王俊杰 on 2020/1/15.
//  Copyright © 2020 王俊杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomAlertBaseViewT.h"
NS_ASSUME_NONNULL_BEGIN

@interface CBDUnifiedAlertView : UIView

/// 不可开发票明细弹窗
/// @param uninvoiceList 不可开发票明细
/// @param sEventId 统计数据Id
/// @param parentVC 弹窗所在的vc
+ (CustomAlertBaseViewT *)configWithUninvoiceList:(NSArray *)uninvoiceList
                                         sEventId:(NSString *)sEventId
                                         parentVC:(UIViewController *)parentVC
                                       closeBlock:(CloseFinishBlock)closeBlock;

@end

NS_ASSUME_NONNULL_END
