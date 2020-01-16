//
//  RequestGetDisparityRefundProgress.h
//  CarBaDa
//
//  Created by zjb on 2018/3/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetDisparityRefundProgress : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;//会员ID
@property (nonatomic, copy)NSString *orderSerialId;//订单流水号
@end
