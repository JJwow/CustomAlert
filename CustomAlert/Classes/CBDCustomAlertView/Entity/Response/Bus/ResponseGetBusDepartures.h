//
//  ResponseGetBusDepartures.h
//  CarBaDa
//
//  Created by wyj on 5/26/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainStations.h"

@interface areaList : NSObject
@property (nonatomic,copy)NSString *areaName;//服务范围名称
@end
@interface cities : NSObject

@property (nonatomic, strong) NSString *cityId; //城市ID
@property (nonatomic, strong) NSString *cityCode; //城市ID
@property (nonatomic,strong) NSString *name;//城市名称（常熟）
@property (nonatomic,strong) NSString *enName;//城市拼音
@property (nonatomic,strong) NSString *shortEnName;//城市简拼
@property (nonatomic,strong) NSString *prefixLetter;//拼音首字母
@property (nonatomic,strong) NSString *type;//行政级别
@property (nonatomic,strong) NSString *enabled;//是否可以预定
@property (nonatomic,strong) NSString *searchName;
//@property (nonatomic,strong) NSString *cityCode;

@property (nonatomic,strong) NSMutableArray *stationList;//车站列表
@property (nonatomic,strong) NSString *province;//省
@property (nonatomic,strong) NSString *city;//市 //出发所在城市
//混合用
@property (nonatomic,strong) NSString *pinyin;
@property (nonatomic,strong) NSString *py;
@property (nonatomic,strong) NSString *alias;//别名

//酒店城市属性
@property (nonatomic, copy) NSString *sid;
@property (nonatomic, copy) NSString *pid;
@property (nonatomic, copy) NSString *shortName;
@property (nonatomic, copy) NSString *shortPrefix;
@property (nonatomic, copy) NSString *isShow;

//城际快线需要
@property (nonatomic, strong) NSString *provinceName;//省份
@property (nonatomic, strong) NSMutableArray *siteItems;

//拼车需要
@property (nonatomic, strong) NSMutableArray *areaList;
@property (nonatomic,strong) NSString *fullName;//城市全名（常熟市）
@property (nonatomic,strong) NSString *county;//常熟 区
@property (nonatomic,strong) NSString *aliasName;//别名  虞山
@property (nonatomic,strong) NSString *lineDptCity;//线路出发城市  苏州
@property (nonatomic,strong) NSString *lineArrCity;//线路到达城市  常熟
@property (nonatomic,strong) NSString *code;//城市编码 320500
@property (nonatomic,strong) NSString *gdLongitude;//默认点高德经度
@property (nonatomic,strong) NSString *gdLatitude;//默认点高德纬度
@property (nonatomic,strong) NSString *address;//默认点地址
@property (nonatomic,strong) NSMutableArray *areaCodeList;//区域code
@end 

@interface ResponseGetBusDepartures : NSObject
@property (nonatomic,strong) NSMutableArray *departureList;
@property (nonatomic,strong) NSMutableArray *hotCityList;
@property (nonatomic,strong) NSString *version;

//处理缓存用，不是原对象数据
@property (nonatomic,strong) NSMutableArray *historyList;
@property (nonatomic,strong) NSMutableArray *historyCacheList;
@property (nonatomic,strong) cities *holdCity;//持有的city

/**
 通过取缓存初始化出发城市model

 @return 出发城市model
 */
-(instancetype)initWithCash;

/**
 创建缓存，出发城市存入Coredata
 */
-(void)createCashDepartCityList;

/**
 创建热门城市缓存
 */
-(void)createCashHotCityList;

@end

@interface departureList : NSObject
@property (nonatomic,strong) NSString *prefix;//前缀
@property (nonatomic,strong) NSMutableArray *cities;

@end


@interface hotCityList : NSObject
@property (nonatomic, strong) NSMutableArray *cities;
@property (nonatomic,strong) NSString *name;//城市名称
@property (nonatomic,strong) NSString *enName;//城市拼音
@property (nonatomic,strong) NSString *shortEnName;//城市简拼
@property (nonatomic,strong) NSString *prefixLetter;//拼音首字母
@property (nonatomic,strong) NSString *type;//行政级别
@property (nonatomic,strong) NSString *enabled;//是否可以预定
@property (nonatomic,strong) NSString *searchName;
@property (nonatomic, strong) NSString *provinceName;//省份
@property (nonatomic, strong) NSString *province;//430返回热门的省份
@property (nonatomic, strong) NSString *city;//430返回热门的城市

//混合城市用
@property (nonatomic,strong) NSString *pinyin;
@property (nonatomic,strong) NSString *py;

//酒店需要
@property (nonatomic, copy) NSString *cityId;	//	城市ID
@property (nonatomic, copy) NSString *cityName; //	城市名称

@end


