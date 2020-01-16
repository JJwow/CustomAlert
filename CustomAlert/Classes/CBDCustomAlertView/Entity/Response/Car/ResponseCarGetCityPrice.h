//
//  ResponseCarGetCityPrice.h
//  CarBaDa
//
//  Created by Zayn on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseCarGetCityPrice : TCTResponseObject
@property (nonatomic, strong) NSArray *carTypeList;
@end

@interface carTypeList : NSObject
@property (nonatomic, copy) NSString *airportServiceFee;//机场费
@property (nonatomic, copy) NSString *brand;//车型品牌
@property (nonatomic, copy) NSString *carTypeId;//车型ID
@property (nonatomic, copy) NSString *feePerKilometer;//每公里单价
@property (nonatomic, copy) NSString *feePerMinute;//每分钟单价
@property (nonatomic, copy) NSString *granularity;//计费粒度
@property (nonatomic, copy) NSString *kongshiDistance;//空驶费
@property (nonatomic, copy) NSString *minFee;//最低费用
@property (nonatomic, copy) NSString *minResponseTime;//最小响应时间
@property (nonatomic, copy) NSString *minTimeLength;//最低起租时间
@property (nonatomic, copy) NSString *name;//车型名称
@property (nonatomic, copy) NSString *nightServiceFee;//夜间费
@property (nonatomic, copy) NSString *personNumber;//乘客数
@property (nonatomic, copy) NSString *pic;//车型照片
@property (nonatomic, copy) NSString *startingFee;//起步价
@end
