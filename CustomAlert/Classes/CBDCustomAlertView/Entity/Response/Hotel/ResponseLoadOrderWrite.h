//
//  ResponseLoadOrderWrite.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/20.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface promptBarList : NSObject
@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic, copy) NSString *content;
@end

@interface priceDetailList : NSObject
@property (nonatomic, copy) NSString *breakfastName;//早餐名称
@property (nonatomic, copy) NSString *price;//价格
@property (nonatomic, copy) NSString *useDate;//日期
@end

@interface arrivalTime :NSObject
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *showValue;
@end

@interface checkInPrePrepayRule : NSObject

@property (nonatomic, copy) NSString *startDate;//开始日期
@property (nonatomic, copy) NSString *endDate;//结束日期
@property (nonatomic, copy) NSString *weekSet;//周有效设置
@property (nonatomic, copy) NSString *changeRule;
@property (nonatomic, copy) NSString *firstHour;
@property (nonatomic, copy) NSString *secondHour;
@property (nonatomic, copy) NSString *deductFeesBefore;
@property (nonatomic, copy) NSString *cashScaleFirstBefore;
@property (nonatomic, copy) NSString *deductNumBefore;
@property (nonatomic, copy) NSString *dateNum;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *deductNumAfter;
@property (nonatomic, copy) NSString *deductFeesAfter;
@property (nonatomic,copy) NSString *cashScaleFirstAfter;//

@end

@interface ResponseLoadOrderWrite : NSObject
@property (nonatomic, copy) NSString *resourceName;//酒店名称
@property (nonatomic, copy) NSString *paymentType;//支付模式 1、现付，2、预付
@property (nonatomic, copy) NSString *resourceProductId;//房型ID
@property (nonatomic, copy) NSString *resourceProductName;//房型名称
@property (nonatomic, copy) NSString *hasBroadband;//宽带
@property (nonatomic, copy) NSString *bedTypeName;//床型
@property (nonatomic, copy) NSString *surplusRooms;//剩余房间数
@property (nonatomic, copy) NSArray *arrivalTime;//最晚到店时间(16,18,20,23,25)
@property (nonatomic, copy) NSArray *priceDetailList;//价格明细
@property (nonatomic, copy) NSString *considerations;//注意事项
@property (nonatomic, copy) NSString *cityName;//城市名
@property (nonatomic, copy) NSString *billingType;//开票方类型（1、同程开票，2、酒店开票）
@property (nonatomic, copy) NSString *foreignGuests;//外宾描述

@property (nonatomic, copy) NSString *guestType;//宾客类型的适用人群 （0:不限1:持中国身份证的居民2:持回乡证的港澳人士3:持台胞证的台湾人士 4:持中国护照的侨胞5:持大陆工作证/居留许可的外籍人士6:持非中国护照的外籍人士7:其他）
@property (nonatomic, copy) NSString *customerType;//客人类型 (All=统一价；Chinese =内宾价，需提示客人“须持大陆身份证入住”； OtherForeign =外宾价，需提示客人“须持国外护照入住”； HongKong =港澳台客人价，需提示客人“须持港澳台身份证入住”； ChinaGuest =中宾价，需提示客人“须持中国身份证、护照入住)
@property (nonatomic, copy) NSString *roomTypeId;//销售房型编号(创单需要，其他无关)

@property (nonatomic, copy) NSArray *checkInPrePrepayRule;//预付规则

@property (nonatomic, copy) NSString *minBookCount;//最少预定数
@property (nonatomic, copy) NSString *nameRegex;//姓名输入校验正则表达式
@property (nonatomic, copy) NSString *nameFilter;//姓名输入筛选

@property (nonatomic, copy) NSArray *promptBarList;

@property (nonatomic,copy) NSString *isIDcardbooking;//是否需要身份证下单（0否，1是）


@end
