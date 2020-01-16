//
//  RequestGetAirportShift.h
//  CarBaDa
//
//  Created by 丁健 on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetAirportShift : TCTRequestObject
@property (nonatomic, copy) NSString *pointId;//站点id
@property (nonatomic, copy) NSString *pointSource;//站点来源    0 老系统  1 新系统
@property (nonatomic, copy) NSString *airportCode;//机场三字码
@property (nonatomic, copy) NSString *serviceType;//接送机类型    1接机 2 送机
@property (nonatomic, copy) NSString *depDate;//出发日期
@property (nonatomic, copy) NSString *departure;//出发地    接机传机场城市、送机传出发城市；
@property (nonatomic, copy) NSString *destination;//到达地    接机传到达城市、送机传机场城市；
@end

NS_ASSUME_NONNULL_END
