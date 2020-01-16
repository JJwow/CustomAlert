//
//  RequestGetBusLockStatus.h
//  CarBaDa
//
//  Created by fly on 2018/11/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusLockStatus : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;//会员ID

@property (nonatomic, copy)NSString *orderSerialId;//订单流水号

@end
