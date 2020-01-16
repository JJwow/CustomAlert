//
//  Requestgetcarposition.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

//获取车辆位置
@interface Requestgetcarposition : TCTRequestObject

@property (nonatomic, copy) NSString *driverId;//司机Id
@property (nonatomic, copy) NSString *timeStamp;//时间戳
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *orderResource;
@property (nonatomic, copy) NSString *driverStatus;

@end
