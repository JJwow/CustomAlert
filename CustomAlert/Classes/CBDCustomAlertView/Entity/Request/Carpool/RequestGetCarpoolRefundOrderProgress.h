//
//  RequestGetCarpoolRefundOrderProgress.h
//  CarBaDa
//
//  Created by John on 2018/11/4.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetCarpoolRefundOrderProgress : TCTRequestObject

@property (nonatomic,copy) NSString *memberId;//会员Id

@property (nonatomic,copy) NSString *orderId;//订单Id

@property (nonatomic,copy) NSString *orderSerialId;//订单流水号

@end

NS_ASSUME_NONNULL_END
