//
//  ResponseCreateTransferOrder.h
//  CarBaDa
//
//  Created by 丁健 on 2018/1/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCreateTransferOrder : NSObject

@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *memberId;//会员ID, 需考虑非会员下单
@property (nonatomic,strong) NSString *orderId;//订单号

@property (nonatomic,strong) NSArray *orderPayDetail;//支付请求参数

@property (nonatomic,strong) NSString *unionSerialId;//联乘订单号
@property (nonatomic,strong) NSString *payExpireDate;//支付失效时间
@property (nonatomic,strong) NSString *serverTime;//服务器时间
@property (nonatomic,strong) NSString *totalAmount;//订单总额
@property (nonatomic,strong) NSString *purchaseModel;//区分先付款后占座还是先占座后付款
@end
