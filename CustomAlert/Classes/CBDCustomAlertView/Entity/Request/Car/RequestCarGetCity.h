//
//  RequestCarGetCity.h
//  CarBaDa
//
//  Created by Zayn on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//  专车获取可用服务城市

#import "TCTRequestObject.h"
/**
 *  专车获取可用服务城市请求
 */
@interface RequestCarGetCity : TCTRequestObject

@property (nonatomic, copy) NSString *supplierCode;
@end
