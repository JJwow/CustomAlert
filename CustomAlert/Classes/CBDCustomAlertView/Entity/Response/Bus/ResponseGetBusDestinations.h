//
//  ResponseGetBusDestinations.h
//  CarBaDa
//
//  Created by Alex on 6/16/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDepartures.h"


@interface airportLineList : NSObject
@property (nonatomic, strong) NSString *cityName;
@property (nonatomic, strong) NSString *airportName;//机场名（站务）
@property (nonatomic, strong) NSString *airportReName;//机场名（快车）
@property (nonatomic, strong) NSString *aliasName;
@property (nonatomic, strong) NSString *airportCityName;
@property (nonatomic, strong) NSString *serviceType;
@property (nonatomic, strong) NSString *price;
@property (nonatomic, strong) NSString *airportCode;//机场三字码
@property (nonatomic, strong) NSString *airportDisplayName;//机场名（巴管）
@property (nonatomic, strong) NSString *enName;//机场城市名-拼音
@property (nonatomic, strong) NSString *searchName;//机场城市名-搜索关键字
@property (nonatomic, strong) NSString *shortEnName;//机场城市名-简拼
@property (nonatomic, strong) NSString *name;//机场城市名
@property (nonatomic, copy) NSString *airportCityCode;//机场所属城市编码
@property (nonatomic, copy) NSString *airportGDLng;//经度
@property (nonatomic, copy) NSString *airportGDLat;//纬度
@end


@interface destinationList : NSObject
@property (nonatomic,strong) NSString *prefix;
@property (nonatomic,strong) NSMutableArray *cities;
@end

@interface ResponseGetBusDestinations : NSObject
@property (nonatomic,strong) NSMutableArray *hotCityList;
@property (nonatomic,strong) NSMutableArray *destinationList;
@property (nonatomic,strong) NSMutableArray *airportLineList;
@property (nonatomic,strong) NSString *version;

@property (nonatomic,strong) NSMutableArray *historyList;
@property (nonatomic,strong) NSMutableArray *historyCacheList;

/**
 通过取缓存初始化到达城市model
 
 @return 出发城市model
 */
-(instancetype)initWithCash:(NSString *)sDepartCity;

/**
 创建缓存，到达城市存入Coredata
 */
-(void)createCashDestinationCityList:(NSString *)sDepartCity;
@end
