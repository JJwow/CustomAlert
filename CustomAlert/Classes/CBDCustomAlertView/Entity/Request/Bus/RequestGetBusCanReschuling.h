//
//  RequestGetBusCanReschuling.h
//  CarBaDa
//
//  Created by John on 2018/7/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusCanReschuling : TCTRequestObject
@property (nonatomic, strong) NSString *orderSerialId;//原单订单流水号
@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *passSerialIds;//改签乘客流水号，多个乘客使用英文逗号隔开
@end
