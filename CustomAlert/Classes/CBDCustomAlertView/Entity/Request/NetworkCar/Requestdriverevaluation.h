//
//  Requestdriverevaluation.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

//评价
@interface Requestdriverevaluation : TCTRequestObject


@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *orderId;//订单id
//#warning orderSerialId
@property (nonatomic, copy) NSString *orderSerial;//订单流水
@property (nonatomic, copy) NSString *star;//会员id
@property (nonatomic, copy) NSString *evalContent;//订单id
@property (nonatomic, copy) NSString *labelName;//订单流水


@end
