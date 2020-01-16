//
//  ResponseCarGetCity.h
//  CarBaDa
//
//  Created by Zayn on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseGetBusDepartures.h"
#import "ResponsePSBusGetCity.h"

@class cities;
@interface ResponseCarGetCity : TCTResponseObject
@property (nonatomic, strong) NSArray *cityList;
@property (strong, nonatomic) NSArray *carHotCityList;
@end

@interface cityList : NSObject
@property (nonatomic, copy) NSString *firstLetter;//城市首字母
@property (nonatomic, strong) NSArray *groupList;//首字母是FirstLetter的所有城市
@property (nonatomic, strong) NSString *cityName;
@property(nonatomic, strong)NSString *prefix;//首字母
@property(nonatomic, strong)NSMutableArray *cities;//相同首字母城市集合

@property (nonatomic, strong) NSMutableArray *busCitys;//城市频道城市

#pragma mark ------------航站楼--------------
@property (nonatomic, copy) NSString *prefixLetter;//首字母
@property (nonatomic, copy) NSString *name;//城市名
@property (nonatomic, copy) NSString *cityCode;//城市编码
@property (nonatomic, copy) NSString *enName;//英文名
@property (nonatomic, copy) NSString *shortEnName;//英文缩写
@property (nonatomic, copy) NSMutableArray *airportList;//航站楼列表

//接送站
@property (nonatomic, copy) NSMutableArray *sites;//航站楼列表
@end

@interface carHotCityList : NSObject
@property (copy, nonatomic) NSString *firstLetter;
@property (strong, nonatomic) NSArray *groupList;
@end

@interface groupList : NSObject
@property (nonatomic, copy) NSString *supplierCode;//供应商ID
@property (nonatomic, copy) NSString *cityName;//城市名称
@property (nonatomic, copy) NSString *cityAlpha;//城市拼音
@property (nonatomic, copy) NSString *cityShort;//城市简拼
@property (nonatomic, copy) NSString *isOversea;//是否国际城市
@property (nonatomic, copy) NSString *isHot;//是否热门城市
@property (copy, nonatomic) NSString *searchName;

@end
