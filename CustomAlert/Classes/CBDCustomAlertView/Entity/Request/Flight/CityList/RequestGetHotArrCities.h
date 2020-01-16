//
//  RequestGetHotArrCities.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/10/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetHotArrCities : TCTRequestObject
@property (nonatomic, copy) NSString *depCityId;//出发城市ID

@end

NS_ASSUME_NONNULL_END
