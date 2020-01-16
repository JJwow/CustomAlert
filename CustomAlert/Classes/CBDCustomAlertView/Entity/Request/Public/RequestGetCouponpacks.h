//
//  RequestGetCouponpacks.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/8/14.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCouponpacks : TCTRequestObject

@property (nonatomic, strong)NSString *project;//项目ID
@property (nonatomic, strong)NSString *departure;//出发地 （酒店无需出发地限制时不传）
@property (nonatomic, strong)NSString *limitPrice;//价格限制 （酒店传酒店总金额；火车票传成人票单价）

@end
