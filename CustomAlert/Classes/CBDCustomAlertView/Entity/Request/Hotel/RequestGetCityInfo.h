//
//  RequestGetCityInfo.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/6/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCityInfo : TCTRequestObject

@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *cityId;

@end
