//
//  RequestPSBusGetCity.h
//  CarBaDa
//
//  Created by admin on 15/10/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
/**
 *  机场校园巴士获取可用服务城市请求
 */
@interface RequestPSBusGetCity : TCTRequestObject

@property (nonatomic,copy) NSString *lineType; //0校园出发 1: 校园到达,  2机场巴士出发 3: 机场巴士到达
@property (nonatomic,copy) NSString *queryType;//all是全部
@property (nonatomic,copy) NSString *cityName;
@property (nonatomic,copy) NSString *siteName;

@end
