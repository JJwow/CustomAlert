//
//  RequestGetlineinfo.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetlineinfo : TCTRequestObject

@property (nonatomic, copy) NSString *departure;//出发

@property (nonatomic, copy) NSString *departureCode;//出发地编码

@property (nonatomic, copy) NSString *destination;//到达

@property (nonatomic, copy) NSString *destinationCode;//到达地编码

@property (nonatomic, copy) NSString *serviceType;//0 普通拼车，1 接机拼车，2 送机拼车

@property (nonatomic, copy) NSString *dptGdLat;//出发高德经度

@property (nonatomic, copy) NSString *dptGdLng;//出发高德纬度

@property (nonatomic, copy) NSString *arrGdLat;//到达高德纬度

@property (nonatomic, copy) NSString *arrGdLng;//到达高德经度

@end

NS_ASSUME_NONNULL_END
