//
//  ResponseGetCityWeather.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetCityWeather : NSObject

@property(nonatomic, strong)NSString *mainInfo;//天气信息，例如多云转阴
@property(nonatomic, strong)NSString *maxTemp;//最高温度
@property(nonatomic, strong)NSString *miniTemp;//最低温度
@property(nonatomic, strong)NSString *refreshTime;//最新更新时间点
@property(nonatomic, strong)NSString *weatherIcon;//天气图片
@property(nonatomic, strong)NSString *wind;//风向

@end
