//
//  RequestCreateSpeedPackOrder.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/5.
//  Copyright © 2018 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCreateSpeedPackOrder : TCTRequestObject
@property (nonatomic, strong) NSString *serialId;//订单流水号
@property (nonatomic, strong) NSString *buySpeedPackCount;//购买加速包个数
@property (nonatomic, copy) NSString *speedType;//管家卡加速包权益类型（1：高速，2：VIP）
@end

NS_ASSUME_NONNULL_END
