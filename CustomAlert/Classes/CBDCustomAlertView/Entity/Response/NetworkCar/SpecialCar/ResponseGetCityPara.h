//
//  ResponseGetCityPara.h
//  CarBaDa
//
//  Created by mini on 2018/9/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetCityPara : NSObject

//是否支持及时单
@property (nonatomic, strong) NSString *isSupportTimely;
//是否支持预约单
@property (nonatomic, strong) NSString *isSupportOrder;
//提前预约时间
@property (nonatomic, strong) NSString *advanceTime;
//预售天数
@property (nonatomic, strong) NSString *saleDay;

@end
