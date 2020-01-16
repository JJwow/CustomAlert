//
//  ResponseGetAirportdptArrCitys.h
//  CarBaDa
//
//  Created by Jabir on 16/2/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponsePSBusGetCity.h"
#import "ResponseGetBusDepartures.h"
@interface hotAirportList : NSObject
@property (nonatomic,strong)NSString *name;
@property (nonatomic,strong)sites *site;

@end

@interface airportCityList : NSObject
@property (nonatomic,strong)NSString *name;
@property (nonatomic,strong)NSString *enName;
@property (nonatomic,strong)NSString *shortEnName;
@property (nonatomic,strong)NSString *prefixLetter;
@property (nonatomic,strong)NSString *searchName;
@property (nonatomic,strong)NSArray *sites;
@property (nonatomic,strong)NSString *dptSiteName;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, copy) NSString *siteReName;//机场快车名

@end

//机场列表搜索模式用的数据对象
@interface airportSiteList : NSObject
@property (nonatomic,strong)NSString *name;//城市名
@property (nonatomic,strong)NSString *enName;//城市拼音
@property (nonatomic,strong)NSString *shortEnName;
@property (nonatomic, copy) NSString *siteCode;//站点编码
@property (nonatomic,strong)NSString *siteDisplayName;//站点名
@property (nonatomic, copy) NSString *cityName;//所属城市1
@property (nonatomic, copy) NSString *siteName;//站点名字1
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, copy) NSString *siteReName;//机场快车名
@end

@interface nearestList : NSObject
@property (nonatomic,strong)NSString *cityName;//城市名称
@property (nonatomic,strong)NSString *siteCode;//机场code
@property (nonatomic,strong)NSString *siteName;//机场名称
@property (nonatomic, copy) NSString *siteDisplayName;//机场别名
@property (nonatomic, copy) NSString *siteReName;//机场快车名

@end

@interface ResponseGetAirportdptArrCitys : NSObject
@property (nonatomic,strong) NSMutableArray *hotAirportList;
@property (nonatomic,strong) NSMutableArray *airportCityList;
@property (nonatomic, strong) NSMutableArray *hotCityList;
@property (nonatomic, strong) NSMutableArray *nearestList;
@end
