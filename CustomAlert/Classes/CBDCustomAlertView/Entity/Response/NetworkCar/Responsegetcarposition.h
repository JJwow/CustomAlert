//
//  Responsegetcarposition.h
//  CarBaDa
//
//  Created by mini on 2018/7/25.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseCarpoolGetCharteredPosition.h"

@interface Responsegetcarposition : NSObject

@property(nonatomic,strong)NSString *driverId;//司机Id
@property(nonatomic,strong)NSString * lat;
@property(nonatomic,strong)NSString * lng;
@property(nonatomic,strong)NSMutableArray *positionList;//位置坐标变化列表
@property(nonatomic,strong)NSString *timeStamp;//时间戳
@property(nonatomic,strong)NSString *navigationChange;
//剩余公里
@property (nonatomic, strong) NSString * remainKilometres;
//平均时速
@property (nonatomic, strong) NSString * avgSpeed;
//剩余时间 秒
@property (nonatomic, strong) NSString *remainingTime;

//总距离
@property (nonatomic, strong) NSString * totalDistance;


//driverStatus与本地不一致，则刷新页面。
@property (nonatomic, strong) NSString *driverStatus;


@end
