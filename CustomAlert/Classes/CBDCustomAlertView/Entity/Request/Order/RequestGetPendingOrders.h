//
//  RequestGetPendingOrders.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/6/1.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPendingOrders : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *projectTypes;//项目类型，多个类型使用英文逗号隔开

@end
