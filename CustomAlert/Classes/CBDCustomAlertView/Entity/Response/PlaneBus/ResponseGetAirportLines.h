//
//  ResponseGetAirportLines.h
//  CarBaDa
//
//  Created by zjb on 16/3/29.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface airportLines : NSObject
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *price;
@property (nonatomic, copy) NSString *projectName;
@property (nonatomic, copy) NSString *projectDesp;
@property (nonatomic,copy) NSString *carTypeDesp;
@property (nonatomic,copy) NSString *serviceTime;
@property (nonatomic, copy) NSString *discountCount;
@property (nonatomic, copy) NSString *maxDiscount;
@property (nonatomic, copy) NSString *tripTip;//行程提示
@property (nonatomic, copy) NSString *busStations;//机场大巴站点 多个用逗号隔开
@property (nonatomic, copy) NSString *busAirportName;
@property (nonatomic, copy) NSString *cityCode;//请求资源城市code    跳转打车专车用
@property (nonatomic, copy) NSString *cityName;//请求资源城市名称    跳转打车专车用
@property (nonatomic, copy) NSString *arrCityName;//到达城市
@property (nonatomic, copy) NSString *saleStatus;//开售状态    0 开售 1 未开售
@property (nonatomic, copy) NSString *saleDays;//预售期


@end

@interface ResponseGetAirportLines : NSObject
@property (nonatomic,strong)NSMutableArray *airportLines;
@property (nonatomic, copy) NSString *customCarRemark;
@end

