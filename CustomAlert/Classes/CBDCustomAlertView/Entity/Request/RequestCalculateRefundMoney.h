//
//  RequestCalculateRefundMoney.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCalculateRefundMoney : TCTRequestObject
@property (nonatomic, copy) NSString *passengerId; //乘客表ID
@property (nonatomic, copy) NSString *serialId; //订单流水号
@end
