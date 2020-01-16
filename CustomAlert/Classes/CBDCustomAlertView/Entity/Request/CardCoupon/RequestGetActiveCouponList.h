//
//  RequestGetActiveCouponList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/4/28.
//  Copyright © 2017年 wyj. All rights reserved.
//获取可使用的代金券列表接口（消费代金券的填写页）


#import "TCTRequestObject.h"

@interface RequestGetActiveCouponList : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *projectType;//项目类型
@property (nonatomic, copy) NSString *orderAmount;//订单总额
@property (nonatomic, copy) NSString *isUseRedPgt;//是否使用红包
@property (nonatomic, copy) NSString *pageSize;
@property (nonatomic, copy) NSString *pageIndex;

@end
