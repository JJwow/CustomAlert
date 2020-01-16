//
//  ResponseFlightCities.h
//  CarBaDa
//
//  Created by zjb on 2019/4/22.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseFlightCities : NSObject
@property (nonatomic, strong) NSMutableArray *prefixItems;
@property (nonatomic, strong) NSMutableArray *hotCities;
@property (nonatomic, strong) NSString *timestamp;
@end

@interface prefixItems : NSObject
@property (nonatomic, strong) NSString *prefix;
@property (nonatomic, strong) NSMutableArray *airportCities;

@end

@interface airportCities : NSObject
@property (nonatomic, strong) NSString *cityId;//城市id
@property (nonatomic, strong) NSString *cityName;//城市名
@property (nonatomic, strong) NSString *mainAirportCode;//城市主机场三字码
@property (nonatomic, strong) NSString *cityFullPinyin;//城市全拼
@property (nonatomic, strong) NSString *cityShortPinyin;//城市简拼
@property (nonatomic, strong) NSString *citySearchName;//城市搜索字段
@property (nonatomic, strong) NSString *hotLevel;//城市热度
@property (nonatomic, strong) NSMutableArray *airports;//城市下机场列表
//500新增
@property (nonatomic, strong) NSString *provinceName;//省份

//500新增私有属性（非接口给）
@property (nonatomic, assign) BOOL bSearchProvinceResult;//是否是搜索匹配省份得到的结果城市

@end

@interface airports : NSObject
@property (nonatomic, strong) NSString *airportCode;//机场三字码
@property (nonatomic, strong) NSString *mainAirportCode;//城市主机场三字码
@property (nonatomic, strong) NSString *airportName;//机场名称
@property (nonatomic, strong) NSString *airportShortName;//机场简称
@property (nonatomic, strong) NSString *travelDistance;//行车距离（米）
@property (nonatomic, strong) NSString *airportCityId;//机场城市id
@property (nonatomic, strong) NSString *airportSearchName;//城市下机场列表
@property (nonatomic, strong) NSString *airportCityName;//机场城市名称
@property (nonatomic, strong) NSString *near;//是否邻近机场，1
@property (nonatomic, strong) NSString *distanceDesc;//机场行车距离描述,四舍五入精确到KM

@end

@interface hotCities : NSObject
@property (nonatomic, strong) NSString *cityName;//城市名称
@property (nonatomic, strong) NSString *cityId;//城市Id
@property (nonatomic, strong) NSString *mainAirportCode;//城市主机场码
@property (nonatomic, strong) NSString *hotLevel;//热度

@end




NS_ASSUME_NONNULL_END
