//
//  RequestCancelTrainOrder.h
//  CarBaDa
//
//  Created by zhaitong on 2018/1/16.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCancelTrainOrder : TCTRequestObject
@property (nonatomic, copy) NSString *orderSerialId; //订单号
@property (nonatomic, copy) NSString *orderId;
@property (nonatomic, copy) NSString *memberId;
@end
