//
//  RequestTrainVipCardRightsCalculate.h
//  CarBaDa
//
//  Created by 丁健 on 2019/1/3.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestTrainVipCardRightsCalculate : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderType;//类型（1、普通订单，2、抢票订单）
@property (nonatomic, copy) NSString *price;//成人票单价
@property (nonatomic, copy) NSString *count;//人数
@property (nonatomic, copy) NSString *deviceInfo;//设备信息
@end

NS_ASSUME_NONNULL_END
