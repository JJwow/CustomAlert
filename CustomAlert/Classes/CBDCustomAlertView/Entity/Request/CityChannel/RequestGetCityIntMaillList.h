//
//  RequestGetCityIntMaillList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/31.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCityIntMaillList : TCTRequestObject
@property (nonatomic, copy) NSString *locationId;//城市id
@property (nonatomic, copy) NSString *reqForm;//请求来源（0、本地生活，1、酒店订单详情页 2、行程助手）
@property (nonatomic, copy) NSString *isPointSubCash;//固定传1
@end
