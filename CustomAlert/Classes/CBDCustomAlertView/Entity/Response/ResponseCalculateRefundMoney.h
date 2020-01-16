//
//  ResponseCalculateRefundMoney.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCalculateRefundMoney : NSObject
@property (nonatomic, copy) NSString *canNotRefMsg; //不可退票原因
@property (nonatomic, copy) NSString *isCanRefund; //是否可以退票
@property (nonatomic, copy) NSString *isSuccess;
@property (nonatomic, copy) NSString *refundFee; //手续费
@property (nonatomic, copy) NSString *refundMoney; //退款金额
@property (nonatomic, copy) NSString *ticketPrice; //票价
@property (nonatomic, copy) NSString *discountAmount;//红包金额
@property (nonatomic, copy) NSString *cashCouponAmount;//现金优惠券金额 V460
@property (nonatomic, copy) NSString *vipReductAmount;//会员管家卡立减金额 V460
@property (nonatomic, copy) NSString *refundRule;//退款规则描述
@end
