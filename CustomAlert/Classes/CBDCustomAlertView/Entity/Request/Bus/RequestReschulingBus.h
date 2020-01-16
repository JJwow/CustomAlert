//
//  RequestReschulingBus.h
//  CarBaDa
//
//  Created by John on 2018/7/21.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface reschulingCurrentTicketsInfo : NSObject

@property (nonatomic, strong)NSString *arrStation;//到达站

@property (nonatomic, strong)NSString *childPrice;//儿童票价

@property (nonatomic, strong)NSString *coachNo;//车次

@property (nonatomic, strong)NSString *coachType;//车型

@property (nonatomic, strong)NSString *departure;//出发地

@property (nonatomic, strong)NSString *destination;//到达地

@property (nonatomic, strong)NSString *displayArrStation;//到达站外显名称

@property (nonatomic, strong)NSString *distance;//距离

@property (nonatomic, strong)NSString *dptDateTime;//出发时间（日期+时间点）

@property (nonatomic, strong)NSString *dptStation;//出发站

@property (nonatomic, strong)NSString *endOperationTime;//流水班结束运营时间

@property (nonatomic, strong)NSString *isPassingStation;//是否途径

@property (nonatomic, strong)NSString *isScrollCoach;//是否流水班

@property (nonatomic, strong)NSString *remark;//备注

@property (nonatomic, strong)NSString *supplierKey;//供应商key

@property (nonatomic, strong)NSString *ticketPrice;//成人票价

@property (nonatomic, strong)NSString *totalAmount;//新单总价

@end

@interface RequestReschulingBus : TCTRequestObject

@property (nonatomic, strong)NSString *changeType;//改签类型，0-平改，1-低改高，2-高改低

@property (nonatomic, strong)NSString *freeChildCount;//携童数量（免票）

@property (nonatomic, strong)NSString *memberId;//会员Id

@property (nonatomic, strong)reschulingCurrentTicketsInfo *currentTicketsInfo;

@property (nonatomic, strong)NSString *orderSerialId;//原单订单流水号

@property (nonatomic, strong)NSString *passSerialIds;//改签乘客流水号，多个乘客使用逗号隔开；


@end




