//
//  RequestGetlineprice.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetlineprice : TCTRequestObject

@property (nonatomic, copy) NSString *lineId;//线路id

@property (nonatomic, copy) NSString *useDate;//用车时间

@property (nonatomic, copy) NSString *dptGdLat;//出发高德经度

@property (nonatomic, copy) NSString *dptGdLng;//出发高德纬度

@property (nonatomic, copy) NSString *arrGdLat;//到达高德经度

@property (nonatomic, copy) NSString *arrGdLng;//到达高德纬度

@property (nonatomic, copy) NSString *memberId;//用户id

@property (nonatomic, copy) NSString *arriveDetail;//到达详细地址

@end

NS_ASSUME_NONNULL_END
