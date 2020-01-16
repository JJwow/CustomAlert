//
//  Responsecreatetrainorder.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/23.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCreateTrainOrder : NSObject
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *memberId;//会员ID, 需考虑非会员下单
@property (nonatomic,strong) NSString *orderId;//订单号

@property (nonatomic,strong) NSArray *orderPayDetail;//支付请求参数

@property (nonatomic,strong) NSString *orderSerialId;//订单序列号
@property (nonatomic,strong) NSString *payExpireDate;//支付失效时间
@property (nonatomic,strong) NSString *serverTime;//服务器时间
@property (nonatomic,strong) NSString *totalAmount;//订单总额
@property (nonatomic,strong) NSString *purchaseModel;//区分先付款后占座还是先占座后付款
@property (nonatomic,strong) NSString *insuranceAmount;//保险总金额
@end

