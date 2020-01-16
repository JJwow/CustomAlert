//
//  Requestbindvirtualno.h
//  CarBaDa
//
//  Created by mini on 2018/7/21.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface Requestbindvirtualno : TCTRequestObject

//memberId
//是
//会员Id
//
//orderSerialId
//是
//订单流水
//
//passageMobileNo
//是
//用户号码
//下单人或乘车人

@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *passageMobileNo;
@property (nonatomic, copy) NSString *driverMobileNo;
@property (nonatomic, copy) NSString *memberId;

@end
