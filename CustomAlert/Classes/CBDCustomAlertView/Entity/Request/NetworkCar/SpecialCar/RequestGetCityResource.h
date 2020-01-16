//
//  RequestGetCityResource.h
//  CarBaDa
//
//  Created by mini on 2018/11/1.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetCityResource : TCTRequestObject

//chengshi
@property (nonatomic, strong) NSString *cityName;//汽车票传出发城市
//区县名称
@property (nonatomic, strong) NSString *countyName;//汽车配传到达城市
//7接站  8送站；9打车专车 汽车票详情页传 8
@property (nonatomic, strong) NSString *useFor;

@property (nonatomic, strong) NSString *dptAdCode;

@end
