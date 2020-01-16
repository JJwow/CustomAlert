//
//  ResponseCreateGrabOrder.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/13.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCreateGrabOrder : NSObject
@property (nonatomic, copy) NSString *memberId;//会员ID
@property (nonatomic, copy) NSString *orderId;//订单号
@property (nonatomic, copy) NSString *orderSerialId;//订单序列号
@property (nonatomic, copy) NSString *payExpireDate;//支付失效时间
@property (nonatomic, copy) NSString *purchaseModel;//买票方式(0:先付款后占座，1:先占座后付款)
@property (nonatomic, copy) NSString *serverTime;//服务器时间
@property (nonatomic, copy) NSString *totalAmount;//订单总额
@property (nonatomic, copy) NSString *insuranceAmount;//保险金额
@property (nonatomic, strong) NSArray *orderPayDetail;//支付请求参数
@end
