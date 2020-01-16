//
//  ResponseGetAirportShift.h
//  CarBaDa
//
//  Created by 丁健 on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface terminals : NSObject
@property (nonatomic, copy) NSString *terminalCode;//航站楼编码    如 T1
@property (nonatomic, copy) NSString *address;//航站楼或机场地址    取机场对应站点地址
@property (nonatomic, copy) NSArray *shifts;//班次
@property (nonatomic, copy) NSString *pointId;//航站楼对应站点id
@property (nonatomic, copy) NSString *localShowName;//外显名称(非接口给)
@end

//班次
@interface shifts : NSObject
@property (nonatomic, copy) NSString *lineId;//线路id
@property (nonatomic, copy) NSString *pointId;//航站楼对应站点id
@property (nonatomic, copy) NSString *shiftInfoId;//班次id
@property (nonatomic, copy) NSString *scheduleInfoId;//排班id
@property (nonatomic, copy) NSString *coachNo;//班次号
@property (nonatomic, copy) NSString *tickets;//剩余票
@property (nonatomic, copy) NSString *dptStationCode;//出发站编码    站内线出票使用
@property (nonatomic, copy) NSString *isCanBooking;//是否可预订
@property (nonatomic, copy) NSString *dptTime;//出发时间
@property (nonatomic, copy) NSString *destTime;//到达时间
@property (nonatomic, copy) NSString *ticketPrice;//票价
@property (nonatomic, copy) NSString *lineDistance;//线路距离
@property (nonatomic, copy) NSString *coachType;//班次类型
@property (nonatomic, copy) NSString *eleInvoice;//是否支持电子票    0 否； 1 是；
@property (nonatomic, copy) NSString *lineType;//线路类型
@property (nonatomic, copy) NSString *intervals;//间隔时间
@property (nonatomic, copy) NSString *isMultCertType;//是否支持多证件    默认 1
@property (nonatomic, copy) NSString *isShowPackage;//是否支持套餐    默认 1
@property (nonatomic, copy) NSString *shiftPointId;//
@property (nonatomic, copy) NSString *ticketTips;//
@property (nonatomic, copy) NSString *servicePointId;//地接服务点id
@property (nonatomic, copy) NSString *servicePointStartTime;//服务开始时间
@property (nonatomic, copy) NSString *servicePointEndTime;//服务结束时间
@property (nonatomic, copy) NSString *servicePointOPrice;//服务价格
@end

@interface ResponseGetAirportShift : NSObject
@property (nonatomic, copy) NSString *servicePointId;//地接服务点id
@property (nonatomic, copy) NSString *servicePointStartTime;//服务开始时间
@property (nonatomic, copy) NSString *servicePointEndTime;//服务结束时间
@property (nonatomic, copy) NSString *servicePointOPrice;//服务价格
@property (nonatomic, copy) NSArray *terminals;//航站楼
@end

