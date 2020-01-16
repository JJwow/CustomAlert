//
//  RequestLoadOrderWrite.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/20.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestLoadOrderWrite : TCTRequestObject
@property (nonatomic, copy) NSString *resourceId;//酒店 Id
@property (nonatomic, copy) NSString *productId;//房型id
@property (nonatomic, copy) NSString *productUniqueId;//价格政策ID
@property (nonatomic, copy) NSString *paymentType;
@property (nonatomic, copy) NSString *startTime;//开始日期
@property (nonatomic, copy) NSString *endTime;//结束日期
@property (nonatomic, copy) NSString *roomTypeId;

@end
