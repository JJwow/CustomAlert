//
//  RequestGetLLPay.h
//  CarBaDa
//
//  Created by Alex on 15/8/3.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetLLPay : TCTRequestObject
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *orderSerialId;
@property (nonatomic,strong) NSString *cashierCode;
@property (nonatomic,strong) NSString *agreeNo;//上次支付银行卡签约号，可不传卡号支付。

-(instancetype)initWithProjectType:(NSString *)sProjectType;
@end
