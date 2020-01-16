//
//  RequestGetTrainNearHotel.h
//  CarBaDa
//
//  Created by zhaitong on 2017/8/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainNearHotel : TCTRequestObject
@property (nonatomic, copy) NSString *depCityId;//出发城市
@property (nonatomic, copy) NSString *depDate;//出发时间
@property (nonatomic, copy) NSString *deplat;//出发站维度
@property (nonatomic, copy) NSString *deplon;//出发站经度
@property (nonatomic, copy) NSString *depStation;//出发站点名
@property (nonatomic, copy) NSString *desCityId;//到达站城市
@property (nonatomic, copy) NSString *desDate;//到达时间
@property (nonatomic, copy) NSString *deslat;//到达站维度
@property (nonatomic, copy) NSString *deslon;//到达站经度
@property (nonatomic, copy) NSString *desStation;//达站名称
@property (nonatomic, copy) NSString *depCity;//出发城市名
@property (nonatomic, copy) NSString *desCity;//到达城市名
@end
