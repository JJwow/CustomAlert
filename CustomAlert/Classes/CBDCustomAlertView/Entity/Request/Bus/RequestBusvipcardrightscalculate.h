//
//  RequestBusvipcardrightscalculate.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/1/4.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestBusvipcardrightscalculate : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;//会员ID

@property (nonatomic, copy)NSString *serviceFee;//单张票服务费

@property (nonatomic, copy)NSString *price;//成人票单价

@property (nonatomic, copy)NSString *count;//人数

@end

NS_ASSUME_NONNULL_END
