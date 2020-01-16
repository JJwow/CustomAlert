//
//  RequestGetCityWeatherDays.h
//  CarBaDa
//
//  Created by Vic_Li on 2018/3/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCityWeatherDays : TCTRequestObject
@property (nonatomic, copy) NSString *locationId;//定位城市的id
@end
