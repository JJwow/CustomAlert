//
//  ResponseCreateFixedOrder.h
//  CarBaDa
//
//  Created by mini on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseCreateFixedOrder : NSObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderId;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *serverTime;
@property (nonatomic, strong) NSString *orderResource;

@property (nonatomic, strong) NSString *payAmount;  //支付金额
@property (nonatomic, strong) NSString *payExpireDate;  //支付失效时间
@property (nonatomic, strong) NSString *payMode;  //0 预支付；1 后支付； 2 部分支付；
@property (nonatomic, strong) NSString *serviceTerm;  //服务条款
@property (nonatomic, strong) NSString *serviceTermUrl;  //服务条款链接
@property (nonatomic, strong) NSArray *orderPayDetail;//
@property (nonatomic, strong) NSString *webAppUrl; //滴滴的url


@end

NS_ASSUME_NONNULL_END
