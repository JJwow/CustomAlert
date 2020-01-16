//
//  ResponseGetAirportTerminal.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/4.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseCarGetCity.h"

NS_ASSUME_NONNULL_BEGIN

@interface airportList : NSObject

@property (nonatomic, copy) NSString *displayName;//机场巴管名称
@property (nonatomic, copy) NSString *airportCode;//机场三字码
@property (nonatomic, copy) NSString *terminalName;//航站楼
@property (nonatomic, copy) NSString *gdLng;//航站楼经度（高德）
@property (nonatomic, copy) NSString *gdLat;//航站楼经度（高德）
@property (nonatomic, copy) NSString *lng;//航站楼经度（百度）
@property (nonatomic, copy) NSString *lat;//航站楼经度（百度）
@property (nonatomic, copy) NSString *searchName;//搜索名
@property (nonatomic, copy) NSString *city;//
@property (nonatomic, copy) NSString *cityId;//
@property (nonatomic, copy) NSString *cityCode;//
@end

@interface prefixList : NSObject

@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, copy) NSMutableArray *cityList;

//城际快线需要
@property (nonatomic,strong) NSMutableArray *cities;
@end

@interface ResponseGetAirportTerminal : TCTResponseObject

@property (nonatomic, copy) NSMutableArray *prefixList;

@end

NS_ASSUME_NONNULL_END
