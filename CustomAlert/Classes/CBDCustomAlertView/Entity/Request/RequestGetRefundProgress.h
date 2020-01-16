//
//  RequestGetRefundProgress.h
//  CarBaDa
//
//  Created by zhaitong on 16/2/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetRefundProgress : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *passengerId;//乘客id
@property (nonatomic, copy) NSString *refType;//退款类型 2、部分退款 3、退票
@property (nonatomic, copy) NSString *serialId;//流水号
@end
