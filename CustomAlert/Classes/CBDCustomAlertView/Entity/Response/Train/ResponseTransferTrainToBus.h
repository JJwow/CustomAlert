//
//  ResponseTransferTrainToBus.h
//  CarBaDa
//
//  Created by 丁健 on 2018/6/26.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseTransferFillOrder.h"

@interface seg1Bus : NSObject
@property (nonatomic, copy) NSString *arrStation;//到达站
@property (nonatomic, copy) NSString *canBooking;//是否可以预订 2-预约购票
@property (nonatomic, copy) NSString *childPrice;//儿童票价格
@property (nonatomic, copy) NSString *coachNo;//车号
@property (nonatomic, copy) NSString *coachType;//车型
@property (nonatomic, copy) NSString *departure;//出发city
@property (nonatomic, copy) NSString *destination;
@property (nonatomic, copy) NSString *displayArrStation;//外显到达车站名称
@property (nonatomic, copy) NSString *distance;//里程
@property (nonatomic, copy) NSString *dptDate;
@property (nonatomic, copy) NSString *dptDateTime;
@property (nonatomic, copy) NSString *dptStation;
@property (nonatomic, copy) NSString *dptTime;
@property (nonatomic, copy) NSString *endOperationTime;//结束运营时间(流水班次)
@property (nonatomic, copy) NSString *freeChildCount;//携童票数量
@property (nonatomic, copy) NSString *isCheckCode;//是否支持扫码检票
@property (nonatomic, copy) NSString *isLocalSchedule;//是否本地线路
@property (nonatomic, copy) NSString *isPassingStation;
@property (nonatomic, copy) NSString *isScrollCoach;
@property (nonatomic, copy) NSString *isSupportFreeChild;
@property (nonatomic, copy) NSString *lineType;
@property (nonatomic, copy) NSString *noBookType;
@property (nonatomic, copy) NSString *passingStation;
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, copy) NSString *runTime;
@property (nonatomic, copy) NSString *supplierKey;
@property (nonatomic, copy) NSString *ticketFee;
@property (nonatomic, copy) NSString *ticketLeft;
@property (nonatomic, copy) NSString *ticketPrice;
@end

@interface ResponseTransferTrainToBus : NSObject
@property (nonatomic, copy) NSString *from0StationCityId;//始发站0所对应的城市ID
@property (nonatomic, copy) NSString *from0StationCityName;//第一层出发站所在的城市
@property (nonatomic, copy) NSString *interval;//换乘时长
@property (nonatomic, copy) NSString *note;//备注
@property (nonatomic, copy) NSString *oneStationTransfer;//是否同站换乘
@property (nonatomic, strong) seg0Train *seg0Train;
@property (nonatomic, copy) NSString *seatCode;//坐席类型
@property (nonatomic, copy) NSString *totalTime;//总时长
@property (nonatomic, strong) seg1Bus *seg1Bus;
@end

