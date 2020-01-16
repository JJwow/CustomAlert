//
//  ResponseRefundTicket.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseRefundTicket : NSObject
@property (nonatomic, copy) NSString *canNotRefMsg; //不可退票原因
@property (nonatomic, copy) NSString *contactPhone; //联系人号码
@property (nonatomic, copy) NSString *isCanRefund; //是否可以退票
@property (nonatomic, copy) NSString *originalOrderNo; //同程订单号
@property (nonatomic, copy) NSString *passengerId; //乘客ID(同程返回的)
@property (nonatomic, copy) NSString *serialId; //订单流水号
@end
