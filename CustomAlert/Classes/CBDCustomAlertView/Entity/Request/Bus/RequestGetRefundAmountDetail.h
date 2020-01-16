//
//  RequestGetRefundAmountDetail.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetRefundAmountDetail : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id

@property (nonatomic, copy) NSString *orderSerialId;//订单流水号

@property (nonatomic, copy) NSString *passSerialId;//单张退票的乘客流水号

@end

NS_ASSUME_NONNULL_END
