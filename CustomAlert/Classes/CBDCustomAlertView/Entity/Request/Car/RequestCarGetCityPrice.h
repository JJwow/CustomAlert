//
//  RequestCarGetCityPrice.h
//  CarBaDa
//
//  Created by Zayn on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCarGetCityPrice : TCTRequestObject
@property (nonatomic, copy) NSString *airCode;//机场三字码,可不传
@property (nonatomic, copy) NSString *city;//城市名
@property (nonatomic, copy) NSString *type;//服务类型,默认传1
@end
