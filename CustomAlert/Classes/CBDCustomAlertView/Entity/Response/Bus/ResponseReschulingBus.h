//
//  ResponseReschulingBus.h
//  CarBaDa
//
//  Created by John on 2018/7/21.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseReschulingBus : NSObject

@property (nonatomic, strong) NSString *orderSerialId;//改签单流水号

@property (nonatomic,strong) NSString *orderId;//改签单订单号

@property (nonatomic,strong) NSString *rtnCode;//0 订单改签失败 1原订单已部分退票 2原订单正在退票 3原订单已退票 4原订单正在改签中 5原订单已改签 6小于发车前XX分钟 7原订单已申请部分退票 8原订单已取出纸质车票 9改签的班次不存在 10改签的班次已过网售时间

@property (nonatomic,strong) NSString *rtnDesc;//与rtnCode的值对应 0 订单改签失败 1原订单已部分退票 2原订单正在退票 3原订单已退票 4原订单正在改签中 5原订单已改签 6小于发车前XX分钟 7原订单已申请部分退票 8原订单已取出纸质车票 9改签的班次不存在 10改签的班次已过网售时间

@end
