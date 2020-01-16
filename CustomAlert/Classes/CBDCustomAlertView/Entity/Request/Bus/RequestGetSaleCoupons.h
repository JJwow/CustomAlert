//
//  RequestGetSaleCoupons.h
//  CarBaDa
//
//  Created by zjb on 2017/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetSaleCoupons : TCTRequestObject
@property (nonatomic,copy) NSString *projectEntry;//项目入口	0汽车票 1火车票
@property (nonatomic,copy) NSString *dptCity;
@property (nonatomic,copy) NSString *dptStation;
@property (nonatomic,copy) NSString *arrCity;
@property (nonatomic,copy) NSString *arrStation;
@property (nonatomic,copy) NSString *price;

@end
