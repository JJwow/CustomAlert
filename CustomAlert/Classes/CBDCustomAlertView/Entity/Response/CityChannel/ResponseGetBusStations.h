//
//  ResponseGetBusStations.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetBusStations : NSObject

@property(nonatomic, strong)NSString *isMore;//是否有更多
@property(nonatomic, strong)NSString *cityName;//所在城市
@property (nonatomic,strong) NSMutableArray *busStationList;

@end

@interface busStationList : NSObject

@property(nonatomic, strong)NSString *address;//车站地址
@property(nonatomic, strong)NSString *lat;//纬度
@property(nonatomic, strong)NSString *lng;//经度
@property(nonatomic, strong)NSString *phone;//电话号码
@property(nonatomic, strong)NSString *picPath;//车站图片
@property(nonatomic, strong)NSString *stationId;//车站id
@property(nonatomic, strong)NSString *stationName;//车站名称

@end
