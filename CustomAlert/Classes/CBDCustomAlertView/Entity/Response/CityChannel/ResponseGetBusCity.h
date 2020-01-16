//
//  ResponseGetBusCity.h
//  CarBaDa
//
//  Created by zjb on 16/7/7.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseCarGetCity.h"

@interface busCitys : NSObject
@property (nonatomic,strong) NSString *cityId;
@property (nonatomic,strong) NSString *cityName;
@property (nonatomic,strong) NSString *cityEnName;
@property (nonatomic,strong) NSString *shortEnName;
@property (nonatomic,strong) NSString *prefixLetter;
@property (nonatomic,strong) NSString *searchName;
@property (nonatomic, strong) NSString *mainAirportCode;//机场三字码

@property (nonatomic,copy) NSString *cityCode;//接口无此参数，定位城市手动赋值
@end

@interface ResponseGetBusCity : NSObject
@property (nonatomic,strong) NSMutableArray *cityList;
@end
