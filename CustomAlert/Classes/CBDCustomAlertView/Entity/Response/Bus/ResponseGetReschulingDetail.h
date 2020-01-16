//
//  ResponseGetReschulingDetail.h
//  CarBaDa
//
//  Created by John on 2018/7/22.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "identityInfo.h"
#import "Requestcreatebusorder.h"

@interface originalOrderDetail : NSObject

@property (nonatomic, strong)NSString *arrStation;//到达站

@property (nonatomic, strong)NSString *coachNo;//车次

@property (nonatomic, strong)NSString *coachType;//车型

@property (nonatomic, strong)NSString *departure;//出发地

@property (nonatomic, strong)NSString *destination;//到达地

@property (nonatomic, strong)NSString *displayArrStation;//到达站外显名称

@property (nonatomic, strong)NSString *distance;//距离

@property (nonatomic, strong)NSString *dptDateTime;//出发时间（日期+时间点）

@property (nonatomic, strong)NSString *dptStation;//出发站

@property (nonatomic, strong)NSString *freeChildCount;//携童数

@property (nonatomic, strong)NSString *isScrollCoach;//是否流水班

@property (nonatomic, strong)NSString *seatNumber;//座位号

@property (nonatomic, strong)NSString *ticketCheck;//检票口

@property (nonatomic, strong)passengersInfo *passengersInfo;//乘客信息

@end

@interface ResponseGetReschulingDetail : NSObject

@property (nonatomic, strong)NSString *changeDesp;//平改-“新票价等于原票价，无需支付；”。

@property (nonatomic, strong)NSString *changeType;//0-平改，1-低改高，2-高改低

@property (nonatomic, strong)NSString *payAmount;//需要支付的金额

@property (nonatomic, strong)originalOrderDetail *originalOrderDetail;//原单的订单信息

@end
