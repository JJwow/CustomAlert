//
//  ResponsePSBusGetCity.h
//  CarBaDa
//
//  Created by admin on 15/10/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDepartures.h"

@interface ResponsePSBusGetCity : NSObject

@property (nonatomic, strong) NSArray *selectableCities;

@end

@interface selectableCities : NSObject

@property (nonatomic, copy) NSString *name;//城市名称
@property (nonatomic, copy) NSString *enName;//城市拼音
@property (nonatomic, copy) NSString *shortEnName;//城市简拼
@property (copy, nonatomic) NSString *searchName;
@property (nonatomic, strong) NSArray *sites;//站点列表

@end

@interface sites : NSObject

@property (nonatomic, copy) NSString *cityName;//所属城市1
@property (nonatomic, copy) NSString *siteCode;//站点编码
@property (nonatomic, copy) NSString *siteName;//站点名字1
@property (nonatomic, copy) NSString *enName;//站点拼音
@property (copy, nonatomic) NSString *shortEnName;//站点简拼
@property (copy, nonatomic) NSString *siteAddress;//站点地址
@property (nonatomic,strong)NSString *siteDisplayName;
@property (nonatomic, copy) NSString *siteReName;//机场快车名

//接送站需要
@property (nonatomic, copy) NSString *siteType;//
@property (nonatomic, copy) NSString *cityId;//
@property (nonatomic, copy) NSString *cityCode;//
@property (nonatomic, copy) NSString *siteLongitude;//
@property (nonatomic, copy) NSString *siteLatitude;//
@property (nonatomic, copy) NSString *district;//

@end
