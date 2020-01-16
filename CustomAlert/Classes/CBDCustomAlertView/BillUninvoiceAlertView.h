//
//  BillUninvoiceAlertView.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "CustomAlertBaseViewT.h"

NS_ASSUME_NONNULL_BEGIN

@interface BillUninvoiceAlertView : CustomAlertBaseViewT
@property (nonatomic, copy) NSString *sEventId;
@property (nonatomic, weak) UIViewController *parentVC;
@property (weak, nonatomic) IBOutlet UIView *contentBackView;
- (IBAction)didPressedClose:(id)sender;
+ (BillUninvoiceAlertView *)config:(NSString *)sEventId parentVC:(UIViewController *)parentVC closeBlock:(CloseFinishBlock)closeBlock;
- (void)configViewWithUninvoiceList:(NSArray *)uninvoiceList;
@end

NS_ASSUME_NONNULL_END
