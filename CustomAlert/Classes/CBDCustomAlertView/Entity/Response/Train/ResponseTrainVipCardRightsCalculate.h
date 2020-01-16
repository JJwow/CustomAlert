//
//  ResponseTrainVipCardRightsCalculate.h
//  CarBaDa
//
//  Created by 丁健 on 2019/1/3.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@class enableTitles;
@class unableTitles;
NS_ASSUME_NONNULL_BEGIN

@interface ResponseTrainVipCardRightsCalculate : NSObject
@property (nonatomic, copy) NSString *cardName;//会员卡名称
@property (nonatomic, copy) NSString *cardId;//会员购买的卡订单ID
@property (nonatomic, copy) NSString *ticketLoseCount;//订单立减金额（无优惠时返回0）
@property (nonatomic, copy) NSString *speedLoseCount;//加速包减免份数
@property (nonatomic, copy) NSString *title;//有且可使用权益描述（本单立减￥N，累计已省￥x）
@property (nonatomic, copy) NSString *cardType;//卡类型（1、月卡，2、年卡，3活动卡）
@property (nonatomic, copy) NSString *sellPrice;//卡售价
@property (nonatomic, copy) NSString *costPrice;//原价
@property (nonatomic, copy) NSString *cardCycle;//卡周期描述
@property (nonatomic, copy) NSString *cardByName;//卡别名
@property (nonatomic, copy) NSString *speedType;//加速包权益类型（1、高速抢票，2、VIP抢票）
@property (nonatomic, copy) NSString *speedTitle;// 加速包权益描述（1、高速抢票，2、VIP抢票）
@property (nonatomic, copy) NSString *speedTimes;//加速包剩余次数
@property (nonatomic, copy) NSString *maxSavings;//最高可省金额
@property (nonatomic, strong) enableTitles *enableTitles;//选中的描述信息
@property (nonatomic, strong) unableTitles *unableTitles;//未选中的描述信息
@end
NS_ASSUME_NONNULL_END

