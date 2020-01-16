//
//  RequestGetPassRangePrice.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetPassRangePrice : TCTRequestObject

@property (nonatomic, copy) NSString *lineId;//线路id
@property (nonatomic, copy) NSString *pointType;//0 上车点； 1 下车点；

@property (nonatomic, copy) NSString *gdLat;//高德纬度
@property (nonatomic, copy) NSString *gdLng;//高德经度

@property (nonatomic, copy) NSString *areaName;//区域
@property (nonatomic, copy) NSString *cityName;//城市

@end

NS_ASSUME_NONNULL_END
