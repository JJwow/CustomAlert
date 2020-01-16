//
//  ResponseOrderFillOrder.h
//  CarBaDa
//
//  Created by 丁健 on 17/3/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrain.h"

@interface ResponseOrderFillOrder : NSObject
@property (nonatomic, copy) NSString *bookState;//预定状态	0还没起售，不可预订 1可预订 2暂无余票 3发车前半小时车次，不可预订 4夜间单 5发车时间小于当前时间，不可预订 6暂售至***
@property (nonatomic, copy) NSString *nightNote;//夜间单提示
@property (nonatomic, copy) NSString *sleeperNote;//卧铺票提示文案（选择卧铺票的时候，优先级高于nightNote）
@property (nonatomic, copy) NSString *queryKey;//
@property (nonatomic, copy) NSString *show12306;//是否显示12306账号cell
@property (nonatomic, copy) NSString *showlottery;//是否显示1元免单
@property (nonatomic, strong) tickets *ticket;//票
@property (nonatomic, copy) NSString *showCashDiscount;//是否显示现金优惠券    string    V420

@property (nonatomic, copy) NSString *showWithhold;//是否需要请求待扣接口
@property (nonatomic, copy) NSString *showBgCard;//是否需要请求超级管家卡接口
@property (nonatomic, copy) NSString *cashCouponName;//优享预订显示名称
@property (nonatomic, copy) NSString *cashCouponBatchCode;//优享预订优惠券批次
@property (nonatomic, copy) NSString *cashCouponType;//优享预订优惠券类型
@property (nonatomic, copy) NSString *cashCouponShowType;//优惠券显示类型（1、选择框显示，2、按钮显示）
@property (nonatomic, copy) NSString *cashCouponSelect;//是否默认勾选（0、不勾选，1勾选）

@property (nonatomic, copy) NSString *saleIconUrl;//优惠购票图标
@property (nonatomic, copy) NSString *oneYuanFreeActivity;//一元免单活动标识
@property (nonatomic, copy) NSString *fromStationCityName;//v370添加。目的通过出发站城市查询相应的保险服务
@property (nonatomic, copy) NSString *fromStationCityId;//出发站城市ID-V400        V400
@property (nonatomic, copy) NSString *showPackage;//是否获取套餐数据（0、不显示，1、显示）
@end


