//
//  RequestGetOriginalOrChangeOrderInfo.h
//  CarBaDa
//
//  Created by John on 2018/7/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetOriginalOrChangeOrderInfo : TCTRequestObject
@property (nonatomic, strong) NSString *orderId;//原单/改签订单号
@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *queryType;//    0-查询改签单；1-查询原单
@end
