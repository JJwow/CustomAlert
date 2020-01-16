//
//  RequestGetNewShuttlePoints.h
//  CarBaDa
//
//  Created by 丁健 on 2019/7/15.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


@interface RequestGetNewShuttlePoints : TCTRequestObject

@property (nonatomic, copy) NSString *departure;//出发地
@property (nonatomic, copy) NSString *departureSite;//出发站
@property (nonatomic, copy) NSString *destination;//到达地
@property (nonatomic, copy) NSString *destinationSite;//到达站
@property (nonatomic, copy) NSString *depDate;//出发日期
@property (nonatomic, copy) NSString *dptGdLng;//出发经度（高德）
@property (nonatomic, copy) NSString *dptGdLat;//出发纬度（高德）
@property (nonatomic, copy) NSString *serviceType;//接送机类型 1接机 2 送机
@property (nonatomic, copy) NSString *destGdLng;//到达经度（高德）
@property (nonatomic, copy) NSString *destGdLat;//到达纬度（高德）

@end

