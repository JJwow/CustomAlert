//
//  ResponseGetRefundProgress2.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainOrderInfo.h"
#import "ResponseGetBusRefoundProgress.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetRefundProgress2 : NSObject

@property (nonatomic, copy) NSString *isSuccessRefund;//是否退票成功

@property (nonatomic, copy) NSString *refundAmount;//退款总金额

@property (nonatomic, strong) NSArray *passengerList;//退票乘客

@property (nonatomic, strong) NSArray *progressItems;//退票乘客

@property (nonatomic, strong) NSArray *refundDetail;//明细

@end

NS_ASSUME_NONNULL_END
