//
//  RequestGetEstimatedrefundamount.h
//  CarBaDa
//
//  Created by 王俊杰 on 2018/12/29.
//  Copyright © 2018 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetEstimatedrefundamount : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;//会员ID

@property (nonatomic, copy)NSString *orderSerialId;//订单流水号

@property (nonatomic, copy)NSString *passSerialId;//乘客流水号

@end

NS_ASSUME_NONNULL_END
