//
//  ResponseGetCityWeatherDays.h
//  CarBaDa
//
//  Created by Vic_Li on 2018/3/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface futures : NSObject
@property (nonatomic, copy) NSString * date;//    日期
@property (nonatomic, copy) NSString * mainInfo;//天气说明 -=--- 晴转多云
@property (nonatomic, copy) NSString * maxTemp;//最高温度
@property (nonatomic, copy) NSString * miniTemp;//最低温度
@property (nonatomic, copy) NSString * picture;//天气icon
@property (nonatomic, copy) NSString * week;//星期

@end

@interface weatherIndexs : NSObject
@property (nonatomic, copy) NSString *indexDes;//指数描述
@property (nonatomic, copy) NSString *indexLevel;//指数等级
@property (nonatomic, copy) NSString * indexName;//指数名称
@end

@interface ResponseGetCityWeatherDays : NSObject
@property (nonatomic, copy) NSString * date;//日期
@property (nonatomic, strong) NSArray * futures;//未来几天天气
@property (nonatomic, copy) NSString * imgUrl;//天气icon的url
@property (nonatomic, copy) NSString * mainInfo;//天气说明 晴转多云
@property (nonatomic, copy) NSString * maxTemp;//最高温度
@property (nonatomic, copy) NSString * miniTemp;//最低温度
@property (nonatomic, copy) NSString * picture;//天气icon
@property (nonatomic, copy) NSString * refreshTime;//刷新时间
@property (nonatomic, strong) NSArray * weatherIndexs;//天气指数
@property (nonatomic, copy) NSString * week;//星期
@property (nonatomic, copy) NSString * wind;//风向
@property (nonatomic, strong) NSString *AQI;//空气质量指数
@property (nonatomic, strong) NSString *AQILevel;//空气质量
@property (nonatomic, strong) NSString *PM25;//PM25
@property (nonatomic, strong) NSString *PM10;//PM10
@property (nonatomic, strong) NSString *CO;//CO
@property (nonatomic, strong) NSString *NO2;//NO2
@property (nonatomic, strong) NSString *O3;//O3
@property (nonatomic, strong) NSString *SO2;//SO2
@property (nonatomic, strong) NSString *visibility;//可见度

@end
