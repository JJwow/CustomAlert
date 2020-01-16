//
//  RequestGetReschulingDetail.h
//  CarBaDa
//
//  Created by John on 2018/7/22.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface currentTicketsInfo : NSObject

@property (nonatomic, strong)NSString *childPrice;//儿童票价

@property (nonatomic, strong)NSString *dptDateTime;//出发时间（日期+时间点）

@property (nonatomic, strong)NSString *ticketPrice;//成人票价

@end

@interface RequestGetReschulingDetail : TCTRequestObject

@property (nonatomic, strong)NSString *memberId;//会员ID

@property (nonatomic, strong)NSString *orderSerialId;//原单订单流水号

@property (nonatomic, strong)NSString *passSerialIds;//改签乘客流水号，多个乘客使用逗号隔开

@property (nonatomic, strong)currentTicketsInfo *currentTicketsInfo;//改签班次信息

@end
