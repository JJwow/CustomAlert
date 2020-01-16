//
//  RequestGetOrderDetail.h
//  CarBaDa
//
//  Created by mini on 2018/7/13.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

//获取订单详情
@interface RequestGetOrderDetail : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *orderId;//订单id
@property (nonatomic, copy) NSString *orderSerialId;//订单流水
@property (nonatomic, copy) NSString *dataEncode;//订单流水


@end
