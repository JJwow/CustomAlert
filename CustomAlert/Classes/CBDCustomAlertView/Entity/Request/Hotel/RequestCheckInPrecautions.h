//
//  RequestCheckInPrecautions.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/6/12.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseLoadOrderWrite.h"

@interface RequestCheckInPrecautions : TCTRequestObject

@property (nonatomic, copy) NSString *resourceId;//酒店Id
@property (nonatomic, copy) NSString *productId;//房间Id
@property (nonatomic, copy) NSString *roomNum;//房间数量
@property (nonatomic, copy) NSString *startDate;//入住时间
@property (nonatomic, copy) NSString *endDate;//离店时间
@property (nonatomic, copy) NSArray *prePrepayRule;//预付规则
@property (nonatomic, copy) NSArray *nightlyRate;//每天价格数组


@end


@interface prePrepayRule : NSObject

//"startDate": "0001/1/1 0:00:00",
//"endDate": "0001/1/1 0:00:00",
//"weekSet": "",
//"changeRule": "",
//"firstHour": 0,
//"secondHour": 0,
//"deductFeesBefore": 0,
//"cashScaleFirstBefore": "",
//"deductNumBefore": 0,
//"dateNum": "",
//"time": "",
//"deductNumAfter": 0,
//"deductFeesAfter": 0

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
@end


@interface nightlyRate : priceDetailList
//"useDate": "",
//"price": "",
//"breakfastName": ""

@end
