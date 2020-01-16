//
//  RequestGetCarpoolOrderDetail.h
//  CarBaDa
//
//  Created by John on 2018/11/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCarpoolOrderDetail : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;//会员Id
@property (nonatomic,copy) NSString *orderId;//订单Id
@property (nonatomic,copy) NSString *orderSerialId;//订单流水
@end
