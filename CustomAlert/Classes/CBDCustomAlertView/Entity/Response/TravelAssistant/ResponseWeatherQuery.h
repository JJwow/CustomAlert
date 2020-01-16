//
//  ResponseWeatherQuery.h
//  CarBaDa
//
//  Created by 张嘉畀 on 2019/8/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface cityWeather : NSObject
@property (nonatomic, strong) NSString *date;//日期
@property (nonatomic, strong) NSString *mainInfo;//天气状况
@property (nonatomic, strong) NSString *maxTemp;//最高温度
@property (nonatomic, strong) NSString *minTemp;//最低温度
@property (nonatomic, strong) NSString *weatherIcon;//天气图标
@end

@interface cityWeatherList : NSObject
@property (nonatomic, strong) NSString *cityId;//城市编号
@property (nonatomic, strong) NSMutableArray *cityWeather;//城市天气

@end

@interface ResponseWeatherQuery : NSObject
@property (nonatomic, strong) NSMutableArray *cityWeatherList;//城市天气列表

@end

NS_ASSUME_NONNULL_END
