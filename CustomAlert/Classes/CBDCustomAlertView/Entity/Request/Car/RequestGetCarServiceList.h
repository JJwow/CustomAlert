//
//  RequestGetCarServiceList.h
//  CarBaDa
//
//  Created by Zayn on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCarServiceList : TCTRequestObject
//起点城市/终点城市/开始时间/城市类型可以不传
@property (nonatomic, copy) NSString *beginTime;
@property (nonatomic, copy) NSString *cityName;//用车城市
@property (nonatomic, copy) NSString *cityType;
@property (nonatomic, copy) NSString *endCity;
@property (nonatomic, copy) NSString *endLat;
@property (nonatomic, copy) NSString *endLng;
@property (nonatomic, copy) NSString *isFixedPrice;
@property (nonatomic, copy) NSString *mapType;
@property (nonatomic, copy) NSString *startCity;
@property (nonatomic, copy) NSString *startLat;
@property (nonatomic, copy) NSString *startLng;
@property (nonatomic, copy) NSString *supplierCode;
@property (nonatomic, copy) NSString *type;

@end
