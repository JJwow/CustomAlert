//
//  Requestgetpath.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

//获取规划路径
@interface Requestgetpath : TCTRequestObject

@property (nonatomic, copy) NSString *driverId;//司机Id
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号

@end
