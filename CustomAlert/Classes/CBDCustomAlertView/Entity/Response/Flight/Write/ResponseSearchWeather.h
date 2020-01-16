//
//  ResponseSearchWeather.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseSearchWeather : TCTResponseObject

@property (nonatomic, copy) NSString *mainInfo;//天气
@property (nonatomic, copy) NSString *weatherIcon;// 天气图标
@property (nonatomic, copy) NSString *tips;//提醒文案

@end

NS_ASSUME_NONNULL_END
