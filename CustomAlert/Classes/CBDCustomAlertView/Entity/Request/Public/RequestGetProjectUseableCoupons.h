//
//  RequestGetProjectUseableCoupons.h
//  CarBaDa
//
//  Created by 丁健 on 2018/8/15.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetProjectUseableCoupons : TCTRequestObject

@property (nonatomic, strong)NSString *project;//项目ID
@property (nonatomic, strong)NSString *memberId;//
@property (nonatomic, strong)NSString *limitAmount;//价格限制 价格限制（酒店传酒店总金额；火车票传成人票单价）
@end
