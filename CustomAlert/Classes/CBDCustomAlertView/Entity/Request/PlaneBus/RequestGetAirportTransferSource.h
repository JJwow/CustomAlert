//
//  RequestGetAirportTransferSource.h
//  CarBaDa
//
//  Created by 丁健 on 2019/5/17.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetAirportTransferSource : TCTRequestObject
@property (nonatomic, copy) NSString *airportCityName;//机场城市名
@property (nonatomic, copy) NSString *airportName;//机场名称
@property (nonatomic, copy) NSString *aliasName;//机场别名
@property (nonatomic, copy) NSString *cityName;//城市名称
@property (nonatomic, copy) NSString *dptDate;//2019-03-21 出发时间
@property (nonatomic, copy) NSString *serviceType;//服务类型 1接机 2送机
@property (nonatomic, copy) NSString *memberId;//
@property (nonatomic, copy) NSString *siteReName;//快车机场名
@property (nonatomic, copy) NSString *airportCode;//机场编码
@property (nonatomic, copy) NSString *cityCode;//城市code 接机传到达城市code、送机传出发

@property (nonatomic, copy) NSString *dptGdLat;//出发纬度（高德）
@property (nonatomic, copy) NSString *dptGdLng;//出发经度（高德）
@property (nonatomic, copy) NSString *arrGdLat;//到达纬度（高德）
@property (nonatomic, copy) NSString *arrGdLng;//到达经度（高德）
@property (nonatomic, copy) NSString *dptCityId;//出发地城市id
@end


