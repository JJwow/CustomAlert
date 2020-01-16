//
//  RequestCabinRules.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCabinRules : TCTRequestObject

@property (nonatomic, strong) NSString *cabinKey;//航班查询的舱位 Key 值
@property (nonatomic, strong) NSString *depDate;//出发日期-2019-05-01 20:00
@property (nonatomic, strong) NSString *flightNo;//航班号
@property (nonatomic, strong) NSString *cabinKeySource;//传1

@end

NS_ASSUME_NONNULL_END
