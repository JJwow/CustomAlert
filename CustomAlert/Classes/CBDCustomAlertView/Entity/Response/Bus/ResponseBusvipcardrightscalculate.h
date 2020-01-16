//
//  ResponseBusvipcardrightscalculate.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/1/4.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface enableTitles : NSObject

@property (nonatomic, strong) NSString *title;//有且可使用权益描述1（本单立减X元，累计已省xx元）

@property (nonatomic, strong) NSString *subTitle;//有且可使用权益描述2（还有x次立减、x张票免服务费权益未使用）

@end

@interface unableTitles : NSObject

@property (nonatomic, strong) NSString *title;//有且可未使用权益描述1

@property (nonatomic, strong) NSString *subTitle;//有且可未使用权益描述2

@end

@interface ResponseBusvipcardrightscalculate : NSObject

@property (nonatomic, strong)NSString *cardId;//会员购买的卡订单ID

@property (nonatomic, strong)NSString *cardName;//会员卡名称

@property (nonatomic, strong)NSString *serviceLose;//单张票减服务费金额（无优惠时返回0）

@property (nonatomic, strong)NSString *serviceLoseCount;//服务费减免张数（无优惠时返回0）

@property (nonatomic, strong)NSString *ticketLoseCount;//订单立减金额（无优惠时返回0）

@property (nonatomic, strong)enableTitles *enableTitles;//已使用超级管家卡文案

@property (nonatomic, strong)unableTitles *unableTitles;//未使用超级管家卡文案

//未购买管家卡时返回的数据
@property (nonatomic, strong)NSString *cardType;//卡类型（1、月卡，2、年卡，3活动卡）

@property (nonatomic, strong)NSString *cardByName;//卡别名

@property (nonatomic, strong)NSString *sellPrice;//卡售价

@property (nonatomic, strong)NSString *costPrice;//原价

@property (nonatomic, strong)NSString *cardCycle;//卡周期描述

@property (nonatomic, copy) NSString *maxSavings;//每月最高可省

@property (nonatomic, copy) NSArray *rightsList;//权益列表

@end

NS_ASSUME_NONNULL_END
