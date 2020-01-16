//
//  ResponseVipCardEnter.h
//  CarBaDa
//
//  Created by zhaitong on 2019/1/3.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface rightsDetial : NSObject
@property (nonatomic, copy) NSString *rightsCount;//权益次数（金额）
@property (nonatomic, copy) NSString *useDes;//使用限制条件描述
@property (nonatomic, copy) NSString *rightsName;//权益物品名称
@property (nonatomic, copy) NSString *resTimes;//剩余次数（0 已使用 大于0 还剩次数）
@property (nonatomic, copy) NSString *porjectName;//定制商品图片
@property (nonatomic, copy) NSString *goodId;//商品Id
@property (nonatomic, copy) NSString *googPic;//定制商品图片
@end


@interface rightsList : NSObject
@property (nonatomic, copy) NSString *rightsTitle;//权益简称
@property (nonatomic, copy) NSString *rightsType;//权益类型id
@property (nonatomic, copy) NSString *rightsIcon;//权益icon
@property (nonatomic, copy) NSString *rightsSubTitle;//权益副标题
@property (nonatomic, copy) NSArray *rightsDetial;
@end

@interface ResponseVipCardEnter : NSObject
@property (nonatomic, strong) NSString *cardName;//卡片名称
@property (nonatomic, strong) NSString *isOpen;//是否开通
@property (nonatomic, strong) NSArray *rightsList;//权益名称列表
@property (nonatomic, strong) NSString *loseCount;//每月最高可省
@property (nonatomic, strong) NSString *sellPrice;//卖价

@property (nonatomic, strong) NSString *cardType;//    卡类型
@property (nonatomic, strong) NSString *cardCycle;//  卡周期描述
@property (nonatomic, strong) NSString *cardByName;//   卡别名
@property (nonatomic, strong) NSString *cardBackUrl;// 管家卡背景图
@property (nonatomic, strong) NSString *enterMsg;//入口文案
@end

NS_ASSUME_NONNULL_END


