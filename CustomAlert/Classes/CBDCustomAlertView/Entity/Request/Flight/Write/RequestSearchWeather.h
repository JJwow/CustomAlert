//
//  RequestSearchWeather.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSearchWeather : TCTRequestObject

@property (nonatomic, copy) NSString *cityId;//城市id
@property (nonatomic, copy) NSString *date;//日期(格式YYYY-MM-dd)

@end

NS_ASSUME_NONNULL_END
