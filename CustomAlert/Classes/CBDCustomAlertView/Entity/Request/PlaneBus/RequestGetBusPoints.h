//
//  RequestGetBusPoints.h
//  CarBaDa
//
//  Created by 丁健 on 2019/7/15.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusPoints : TCTRequestObject
@property (nonatomic, copy) NSString *busStations;//机场大巴站点    多个用逗号隔开
@property (nonatomic, copy) NSString *dptGdLng;//出发经度（高德）
@property (nonatomic, copy) NSString *dptGdLat;//出发纬度（高德）
@property (nonatomic, copy) NSString *cityName;//出发城市名称
@end

