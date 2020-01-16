//
//  ResponseGetRecentlyTravelling.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/8/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetbusorderdetail.h"

NS_ASSUME_NONNULL_BEGIN
@protocol HomePageTicketInfoProtocol <NSObject>
@optional
@property (nonatomic, assign, getter=isScrollCoach) BOOL bScrollCoach;//流水班
@property (nonatomic, copy) NSString *sHomePageProjectName;//项目名称
@property (nonatomic, copy) NSString *sHomePageDisplayName;//展示名称
@property (nonatomic, copy) NSString *sHomePageSeatNumber;//座位号
@property (nonatomic, copy) NSString *sHomePageDisplaySeatNumber;//展示用的座位号
@property (nonatomic, copy) NSString *sHomePageTicketCheck;//检票口
@property (nonatomic, copy) NSString *sHomePageDptEndTime;//流水班最晚发车时间
@end

#pragma mark - 机票
@interface flightTravellingPassengerInfo : NSObject
@property (nonatomic, strong) NSString *price;//乘客票价
@property (nonatomic, strong) NSString *name;//乘客姓名
@property (nonatomic, strong) NSString *type;//乘客类型
@property (nonatomic, strong) NSString *endorsed;//是否改签 0 未改签，1 已改签
@property (nonatomic, strong) NSString *refund;//是否退票 0 未退票，1 已退票

@end

@interface flightTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *orderType;//订单类型
@property (nonatomic, strong) NSString *dptStartTime;//出发时间
@property (nonatomic, strong) NSString *arrCity;//到达城市
@property (nonatomic, strong) NSString *cabin;//头等座舱
@property (nonatomic, strong) NSString *accIns;//是否购买加速 1 是，0 否
@property (nonatomic, strong) NSString *dptCityId;//出发城市id
@property (nonatomic, strong) NSString *realFlightNo;//实际航班号
@property (nonatomic, strong) NSString *realCarrierName;//实际航司名称
@property (nonatomic, strong) NSString *delayIns;//是否购买延误险 1 是，0 否
@property (nonatomic, strong) NSString *freeOrderCount;//免单数量
@property (nonatomic, strong) NSString *carrierName;//航司名称
@property (nonatomic, strong) NSString *dptEndTime;//出发结束时间
@property (nonatomic, strong) NSString *toCityCode;//到达城市code
@property (nonatomic, strong) NSString *share;//是否共享航班
@property (nonatomic, strong) NSString *arrAirportName;//到达机场名称
@property (nonatomic, strong) NSString *dptCity;//出发城市名称
@property (nonatomic, strong) NSString *dptAirportName;//出发机场名称
@property (nonatomic, strong) NSString *arrCityId;//到达城市id
@property (nonatomic, strong) NSString *dptTerminal;//出发航站楼
@property (nonatomic, strong) NSString *toAirportCode;//到达机场三字码
@property (nonatomic, strong) NSString *totalAmount;//订单总金额
@property (nonatomic, strong) NSString *fromCityCode;//出发城市code
@property (nonatomic, strong) NSString *flightNo;//航班号
@property (nonatomic, strong) NSString *dptCoordinate;//出发经纬度
@property (nonatomic, strong) NSString *arrTerminal;//到达航站楼
@property (nonatomic, strong) NSString *arrCoordinate;//到达经纬度
@property (nonatomic, strong) NSString *fromAirportCode;//出发机场三字码

@end

#pragma mark - 汽车票
@interface busTravellingPassengerInfo : NSObject
@property (nonatomic, strong) NSString *price;//乘客票价
@property (nonatomic, strong) NSString *name;//乘客姓名
@property (nonatomic, strong) NSString *type;//乘客类型
@property (nonatomic, strong) NSString *endorsed;//是否改签 0 未改签，1 已改签
@property (nonatomic, strong) NSString *refund;//是否退票 0 未退票，1 已退票
@property (nonatomic, strong) NSString *seatNo;//座位号

@end

@interface busTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *orderType;//订单类型
@property (nonatomic, strong) NSString *dptStation;//出发站
@property (nonatomic, strong) NSString *dptCity;//出发城市
@property (nonatomic, strong) NSString *arrStation;//到达站
@property (nonatomic, strong) NSString *dptStartTime;//出发时间
@property (nonatomic, strong) NSString *arrCity;//到达城市
@property (nonatomic, strong) NSString *freeChildCount;//免票儿童数量
@property (nonatomic, strong) NSString *checkPoint;//检票口
@property (nonatomic, strong) NSString *freeOrderCount;//免单数量
@property (nonatomic, strong) NSString *chengYiInsurance;//乘意险 0否，1是
@property (nonatomic, strong) NSString *stop;//是否终点站 1 是，0 否
@property (nonatomic, strong) NSString *nonstop;//非终点站
@property (nonatomic, strong) NSString *rollSchedule;//是否流水班 1 是，0 否
@property (nonatomic, strong) NSString *dptEndTime;//结束时间
@property (nonatomic, strong) NSString *bookingType;//预定类型0:先付款 1：先占座

@end

#pragma mark - 火车票
@interface trainTravellingPassengerInfo : NSObject
@property (nonatomic, strong) NSString *seatTypeDesc;//座位类型
@property (nonatomic, strong) NSString *passengerType;//乘客类型
@property (nonatomic, strong) NSString *ticketPrice;//票价
@property (nonatomic, strong) NSString *name;//乘客姓名
@property (nonatomic, strong) NSString *passengerId;//乘客id
@property (nonatomic, strong) NSString *seatNo;//乘客座位号
@property (nonatomic, strong) NSString *endorsed;//是否改签 1 是，0 否
@property (nonatomic, strong) NSString *refund;//是否退票 1 是 ，0 否

@end

@interface trainTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *fromStationLat;//出发站纬度
@property (nonatomic, strong) NSString *fromStationName;//出发站名称
@property (nonatomic, strong) NSString *fromCityId;//出发城市id
@property (nonatomic, strong) NSString *toStationLon;//到达站纬度
@property (nonatomic, strong) NSString *trainNo;//车次号
@property (nonatomic, strong) NSString *toStationCity;//到达城市
@property (nonatomic, strong) NSString *toCityId;//到达城市id
@property (nonatomic, strong) NSString *toStationName;//到达站名称
@property (nonatomic, strong) NSString *fromStationLon;//出发站经度
@property (nonatomic, strong) NSString *ticketGate;//检票口
@property (nonatomic, strong) NSString *fromTime;//出发时间
@property (nonatomic, strong) NSString *buyOneyuanfree;//是否购买一元免单 1 是 0 否
@property (nonatomic, strong) NSString *fromStationCity;//出发站城市
@property (nonatomic, strong) NSString *toStationLat;//到达站纬度
@property (nonatomic, strong) NSString *toTime;//到达时间
@property (nonatomic, strong) NSString *buyInsurance;//是否购买保险 1 是，0 否
@property (nonatomic, strong) NSString *orderStateName;//订单状态名称

@end

#pragma mark - 快车
@interface expressBusTravellingPassengerInfo : NSObject
@property (nonatomic, strong) NSString *cardNum;//证件号
@property (nonatomic, strong) NSString *seatNum;//座位号
@property (nonatomic, strong) NSString *passengerId;//乘客id
@property (nonatomic, strong) NSString *endorsed;//是否改签 1 是，0 否
@property (nonatomic, strong) NSString *refund;//是否退票 1 是 ，0 否

@end

@interface getOnPoint : NSObject
@property (nonatomic, strong) NSString *gdLng;//上车点经度
@property (nonatomic, strong) NSString *address;//上车点地址
@property (nonatomic, strong) NSString *cityName;//上车点城市
@property (nonatomic, strong) NSString *pointName;//站点名称
@property (nonatomic, strong) NSString *gdLat;//上车点纬度
@property (nonatomic, strong) NSString *cityId;//城市编号

@end

@interface getOffPoint : NSObject
@property (nonatomic, strong) NSString *gdLng;//下车点经度
@property (nonatomic, strong) NSString *address;//下车点地址
@property (nonatomic, strong) NSString *cityName;//下车点城市
@property (nonatomic, strong) NSString *pointName;//站点名称
@property (nonatomic, strong) NSString *gdLat;//下车点纬度
@property (nonatomic, strong) NSString *cityId;//城市编号

@end

@interface carInfo : NSObject
//快车
@property (nonatomic, strong) NSString *carNum;//车牌号
@property (nonatomic, strong) NSString *driverContact;//司机电话

//拼车新增
@property (nonatomic, strong) NSString *carType;//车辆类型
@property (nonatomic, strong) NSString *driverColor;//车辆颜色
@property (nonatomic, strong) NSString *driverName;//司机姓名

@end

@interface expressBusTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) getOffPoint *getOffPoint;//下车点
@property (nonatomic, strong) NSString *orderStatusDesp;//订单状态描述
@property (nonatomic, strong) carInfo *carInfo;//车辆信息
@property (nonatomic, strong) getOnPoint *getOnPoint;//上车点
@property (nonatomic, strong) ticketInfo *ticketInfo;//票信息

@end

#pragma mark - 拼车
@interface carpoolTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *totalAmount;//订单金额
@property (nonatomic, strong) NSString *serviceTimeEnd;//服务结束时间
@property (nonatomic, strong) getOffPoint *getOffPoint;//下车点
@property (nonatomic, strong) NSString *orderStatusDesp;//订单状态描述
@property (nonatomic, strong) carInfo *carInfo;//车辆信息
@property (nonatomic, strong) getOnPoint *getOnPoint;//上车点

@end

#pragma mark - 网约车
@interface hailingCarTravellingInfo : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *serviceTimeEnd;//服务结束时间
@property (nonatomic, strong) getOffPoint *getOffPoint;//下车点
@property (nonatomic, strong) NSString *orderStatusDesp;//订单状态描述
@property (nonatomic, strong) carInfo *carInfo;//车辆信息
@property (nonatomic, strong) getOnPoint *getOnPoint;//上车点
@property (nonatomic, strong) NSString *externalWebAppUrl;//第三方链接（滴滴）

@end

#pragma mark - 包车
@interface charteredBusTravellingInfo : NSObject
@property (nonatomic, strong) NSString *serviceTimeEnd;//服务结束时间
@property (nonatomic, strong) getOffPoint *getOffPoint;//下车点
@property (nonatomic, strong) NSString *orderStatusDesp;//订单状态描述
@property (nonatomic, strong) carInfo *carInfo;//车辆信息
@property (nonatomic, strong) getOnPoint *getOnPoint;//上车点
@property (nonatomic, strong) NSString *productType;//产品类型 （4 国内包车 9 包天包车 10 定制包车）
@property (nonatomic, strong) NSString *serviceDays;//服务天数

@end

#pragma mark - 酒店
@interface hotelTravellingInfo : NSObject
@property (nonatomic, strong) NSString *gdLng;//酒店经度
@property (nonatomic, strong) NSString *address;//酒店地址
@property (nonatomic, strong) NSString *city;//酒店城市
@property (nonatomic, strong) NSString *gdLat;//酒店纬度
@property (nonatomic, strong) NSString *days;//入住天数
@property (nonatomic, strong) NSString *cityId;//酒店城市id
@property (nonatomic, strong) NSString *endTime;//离店时间
@property (nonatomic, strong) NSString *hotelName;//酒店名称

@end

@interface travellingOrderDetailInfo : NSObject
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, strong) NSString *orderStateName;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *orderId;
@property (nonatomic, assign) BOOL bGrabTicket;
@property (nonatomic, strong) NSString *usefor;
@property (nonatomic, strong) NSString *departure;
@property (nonatomic, strong) NSString *destination;
@property (nonatomic, strong) NSString *dptDateTime;
@property (nonatomic, strong) NSString *webAppUrl;

@end

@interface travellingList : NSObject<HomePageTicketInfoProtocol>
@property (nonatomic, strong) NSString *serialId;
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, strong) NSString *orderState;
@property (nonatomic, strong) NSString *startTime;//出发时间
@property (nonatomic, strong) NSMutableArray *passengerInfo;//乘客信息
//@property (nonatomic, strong) NSDictionary *travellingInfo;//行程信息
@property (nonatomic, strong) NSMutableArray *arrTravellingInfo;//行程信息数组，需手动解析成不同对象
@property (nonatomic, strong) NSString *totalAmount;//订单总额
@property (nonatomic, strong) NSString *orderStateName;//订单状态描述
@property (nonatomic, strong) NSMutableArray *ticketCodeList;//首页用的取票码
@property (nonatomic, strong) NSMutableArray *ticketImageFull;//首页用二维码
@property (nonatomic, strong) NSString *ticketCodeType;//首页用0一维码 1二维码


@property (nonatomic, strong) id customTravellingInfo;//自定义旅程信息
@property (nonatomic, strong) NSMutableArray *customPassengerInfoList;//自定义旅客信息
@property (nonatomic, strong) travellingOrderDetailInfo *orderDetailInfo;//订单详情页所需的参数对象

/**
 获取到达城市

 @return 到达城市
 */
- (NSString *)getDptCity;

/**
 获取出发站点

 @return 出发站名
 */
- (NSString *)getDptStation;

/**
 获取经纬度

 @return 经纬度数组（纬度，经度）
 */
- (NSArray *)getDptStationLatitudeAndLongitude;

/**
 获取到达城市名

 @return 到达城市名
 */
- (NSString *)getArrCity;

/**
 获取到达站点

 @return 到达站名
 */
- (NSString *)getArrStation;

/**
 获取到达城市Id

 @return 到达城市Id
 */
- (NSString *)getArrCityId;
@end

@interface ResponseGetRecentlyTravelling : NSObject
@property (nonatomic, strong) NSMutableArray *travellingList;
@end

NS_ASSUME_NONNULL_END
