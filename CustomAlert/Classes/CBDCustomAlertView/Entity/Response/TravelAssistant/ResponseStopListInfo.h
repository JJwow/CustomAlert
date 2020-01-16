//
//  ResponseStopListInfo.h
//  CarBaDa
//
//  Created by mini on 2019/12/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainStopStation.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseStopListInfo : NSObject

@property (nonatomic, strong) NSString *lateStateName;//状态描述，例如：等待出行、行程中
@property (nonatomic, strong) NSString *lateStateRemark;//正晚点描述，例如：巴士管家提醒您，列车将于x小时x分钟后发车。
@property (nonatomic, strong) NSString *currentLateState;// 0-正点；1-晚点
@property (nonatomic, strong) NSString *currentLateStateRemark;//下一个站点的正晚点状态描述，比如：正点-到达上海虹桥
@property (nonatomic, strong) NSString *stayTimeSpanCount;//总耗时，例如：全程x小时x分钟
@property (nonatomic, strong) NSMutableArray *stations;//


@end

NS_ASSUME_NONNULL_END
