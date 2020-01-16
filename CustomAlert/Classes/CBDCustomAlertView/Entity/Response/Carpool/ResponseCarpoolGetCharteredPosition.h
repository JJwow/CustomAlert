//
//  ResponseCarpoolGetCharteredPosition.h
//  CarBaDa
//
//  Created by fly on 2018/11/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface positionList : NSObject
@property (nonatomic, strong) NSString *lat;
@property (nonatomic, strong) NSString *lng;
@property (nonatomic, strong) NSString *gdLat;
@property (nonatomic, strong) NSString *gdLng;
@end

@interface ResponseCarpoolGetCharteredPosition : NSObject

@property (nonatomic, copy) NSString *driverId;

@property (nonatomic, copy) NSString *lat;//百度纬度

@property (nonatomic, copy) NSString *lng;//百度经度

@property (nonatomic, copy) NSString *gdLat;//高德纬度

@property (nonatomic, copy) NSString *gdLng;//高德经度

@property (nonatomic, copy) NSString *remainKilometres;//剩余公里

@property (nonatomic, copy) NSString *remainingTime;//剩余时间

@property (nonatomic, copy) NSMutableArray *positionList;//位置坐标变化列表

@property (nonatomic, copy) NSString *timeStamp;//时间戳

@property (nonatomic, copy) NSString *orderStatus;//订单状态 7 已派车；10 服务中； 11服务完成；

@property (nonatomic, copy) NSString *driverStatus;//司机操作状态 1 出发去接乘客；2等待乘客上车；3接到乘客；4送达乘客

@end

