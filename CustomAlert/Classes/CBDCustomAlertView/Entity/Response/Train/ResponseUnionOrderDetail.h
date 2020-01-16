//
//  ResponseUnionOrderDetail.h
//  CarBaDa
//
//  Created by zhaitong on 2018/1/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainOrderInfo.h"
@interface subOrders : NSObject
@property (nonatomic, copy) NSString *fromDate; //发车日期
@property (nonatomic, copy) NSString *fromPassType; //判断是否途经站
@property (nonatomic, copy) NSString *fromStationCode; //发车站拼音
@property (nonatomic, copy) NSString *fromStationName; //发车站
@property (nonatomic, copy) NSString *fromTime; //发车时间
@property (nonatomic, copy) NSString *seatName; //座位名称
@property (nonatomic, copy) NSString *seatType; //座位类型
@property (nonatomic, copy) NSString *ticketGate;//检票口
@property (nonatomic, copy) NSString *ticketNo; //取票号
@property (nonatomic, copy) NSString *toDate; //到达日期
@property (nonatomic, copy) NSString *toPassType; //判断是否途经站
@property (nonatomic, copy) NSString *toStationCode; //到达站拼音
@property (nonatomic, copy) NSString *toStationName; //到达站
@property (nonatomic, copy) NSString *toTime; //到达时间
@property (nonatomic, copy) NSString *trainNo; //车次号
@property (nonatomic, copy) NSString *serialId;//请求改签用的订单号
@property (nonatomic, strong) NSArray *passengerList; //乘客列表
@property (nonatomic, strong) NSArray *packages;//套餐
@property (nonatomic, copy) NSString *isStopSale;//是否停运
@end
@interface priceDetail : NSObject
@property (nonatomic, copy) NSString *key;//价格详情名称
@property (nonatomic, copy) NSString *value;//价格
@property (nonatomic, copy) NSString *priceType;//1.起步价 2折扣
@property (nonatomic, copy) NSString *position;//0 第一单元格； 1 第二单元格；
@end
@interface ResponseUnionOrderDetail : NSObject
@property (nonatomic, copy) NSString* cancelReason;
@property (nonatomic, copy) NSString *memberId; //会员ID
@property (nonatomic, copy) NSString *note;//顶部提示
@property (nonatomic, copy) NSString *outTicketFailCode;//出票失败原因码
@property (nonatomic, copy) NSString *payExpireDate; //过期时间
@property (nonatomic, copy) NSString *serverTime;//服务器时间
@property (nonatomic, copy) NSString *ticketModel; //购票方式    0、代购 1、自购、2、送票上门
@property (nonatomic, copy) NSString *transferTime;//换乘时间
@property (nonatomic, copy) NSString *transferType;//换乘类型    1:同站 2:异站
@property (nonatomic, copy) NSString *unionSerialId;//联乘订单序列号
@property (nonatomic, copy) NSString *totalAmount;//订单总额
@property (nonatomic, copy) NSString *orderState; //订单状态
@property (nonatomic, strong) NSString *orderStateName;//订单状态
@property (nonatomic, strong) NSString *valueAddedServices;//其他套餐价格
@property (nonatomic, copy) NSArray *subOrders;
@property (nonatomic, copy) NSArray *orderPayDetail;
@property (nonatomic, copy) NSArray *priceDetail;
@property (nonatomic, strong) showButtons *showButtons;
@end
