//
//  RequestFlightCities.h
//  CarBaDa
//
//  Created by zjb on 2019/4/22.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightCities : TCTRequestObject
@property (nonatomic, copy) NSString *timestamp;//时间戳,代表版本号

@property (nonatomic, copy) NSString *privateTimestamp;//私有时间戳，本地用来区分同一个请求的
@end

NS_ASSUME_NONNULL_END
