//
//  Requestgetredpackagelist.h
//  CarBaDa
//
//  Created by Alex on 15/6/18.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetredpackagelist : TCTRequestObject

@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *isActive;
@property (nonatomic,copy) NSString *PerAmount;//新增的单张金额红包
@property (nonatomic,copy) NSString *orderAmount;
@property (nonatomic,copy) NSString *batchType;//批次类型（0:红包 1:优惠券）
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *PageSize;
@property (nonatomic,copy) NSString *PageIndex;
@property (nonatomic,copy) NSString *resourceLimit;//红包控制(lineid)
@property (nonatomic,copy) NSString *cities;
@property (nonatomic,copy) NSString *accountLimit;//0、无限制 1、仅12306账号使用 2、仅非12306账号使用 （不传==无限制）
@property (nonatomic, copy) NSString *dptDate;//出发时间（入住时间）
@end
