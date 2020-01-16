//
//  RequestSearchFlightlist.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/17.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSearchFlightlist : TCTRequestObject

@property (nonatomic, strong) NSString *tripType;//行程类型，1：单程
@property (nonatomic, strong) NSString *depCode;//出发地主机场三字码
@property (nonatomic, strong) NSString *arrCode;//到达地主机场三字码
@property (nonatomic, strong) NSString *depDate;//出发日期
@property (nonatomic, strong) NSString *backDate;//返程日期 非必传
@property (nonatomic, strong) NSString *childNumber;//儿童数量 非必传
@property (nonatomic, strong) NSString *flightNo;//航班号 非必传
@property (nonatomic, strong) NSString *cabinCode;//实际仓位 非必传

@end

NS_ASSUME_NONNULL_END
