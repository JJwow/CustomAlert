//
//  ResponseSearchFlightlist.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/17.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface cabins : NSObject

@property (nonatomic, strong) NSString *cabinKey;//舱位 Key 值
@property (nonatomic, strong) NSString *cabinCode;//舱位码（Y、 F……）
@property (nonatomic, strong) NSString *cabinDesc;//舱位描述（4 折经济舱）
@property (nonatomic, strong) NSString *discount;//折扣（4.0）
@property (nonatomic, strong) NSString *seatCount;//座位数（A 表示充足，座位数>9，其余为数字）
@property (nonatomic, strong) NSString *cabinClass;//舱位等级（Y/C/F）

@property (nonatomic, strong) NSString *cabinClassName;//舱位等级名称（经济舱/公务舱/头等舱）
@property (nonatomic, strong) NSString *allowPassengerType;//"可售卖乘客类型：0-只售成人和儿童1-售所有 2-只售成人"
@property (nonatomic, strong) NSString *auditPrice;//"成人票面价，可以理解为行程单打印出来的价格。分销用户可用这个价格销售给用户戒加价后销售"
@property (nonatomic, strong) NSString *childPrice;//"儿童票面价，可以理解为行程单打印出来的价格。分销用户可用这个价格销售给用户戒加价后销售"
@property (nonatomic, strong) NSString *babyPrice;//"婴儿票面价，可以理解为行程单打印出来的价格。分销用户可用这个价格销售给用户戒加价后销售"

@property (nonatomic, strong) NSString *auditSalePrice;//"成人结算价，再加上基建和燃油，就是最终和同程的结算金额"
@property (nonatomic, strong) NSString *childSalePrice;//儿童结算价，再加儿童燃油，就是最终和同程的结算金额
@property (nonatomic, strong) NSString *babySaleprice;//婴儿结算价，直接就是和同程的结算金额
@property (nonatomic, strong) NSString *receiptType;//"报销凭证类型1-行程单2-収票"
//@property (nonatomic, strong) NSString *ruleRemark;//规则备注（享 20 公斤免费行李额）
@property (nonatomic, strong) NSString *merchantId;//
@property (nonatomic, strong) NSString *lowestRefundFee;//最低退票费
@property (nonatomic, strong) NSString *lowestChangeFee;//最低改签费
@property (nonatomic, strong) NSString *changePrice;//改签费
@property (nonatomic, strong) NSString *isGw;//是否官网旗舰店
@property (nonatomic, strong) NSMutableArray *rules;
@property (nonatomic, strong) NSString *baseRule;//新航班签转规则

@end

@interface stopItems : NSObject

@property (nonatomic, strong) NSString *stopCityName;//经停城市名称
@property (nonatomic, strong) NSString *stopAirPort;//经停机场三字码
@property (nonatomic, strong) NSString *stopAirPortName;//经停机场名称
@property (nonatomic, strong) NSString *stopArrTime;//经停到达时间（18:10）
@property (nonatomic, strong) NSString *stopDepTime;//经停起飞时间（19:05）
@property (nonatomic, strong) NSString *stopDuriation;//经停时长(55 分钟)

@end

@interface flights : NSObject

@property (nonatomic, strong) NSString *flightSegmentIndex;//航段序号
@property (nonatomic, strong) NSString *flightType;//行程类型，0-去程
@property (nonatomic, strong) NSString *carrier;//航司二字码
@property (nonatomic, strong) NSString *carrierName;////航司名称（东方航空）
@property (nonatomic, strong) NSString *flightNo;//航班号（MU5402）
@property (nonatomic, strong) NSString *fromCityCode;//
@property (nonatomic, strong) NSString *fromCityName;//
@property (nonatomic, strong) NSString *arrAirPort;//到达机场三字码
@property (nonatomic, strong) NSString *arrAirPortName;
@property (nonatomic, strong) NSString *depAirPort;//出发机场三字码（CTU）
@property (nonatomic, strong) NSString *depAirPortName;//出发机场名称（成都双流机场）
@property (nonatomic, strong) NSString *depAirPortFullNameShort;//
@property (nonatomic, strong) NSString *depAirPortShortNameShort;//出发机场简称（双流）
@property (nonatomic, strong) NSString *depTerminal;//出发航站楼（T2）
@property (nonatomic, strong) NSString *depTime;//起飞时间（2017-10-27 07:05）
@property (nonatomic, strong) NSString *toCityCode;//
@property (nonatomic, strong) NSString *toCityName;//到达城市名称
@property (nonatomic, strong) NSString *flightPunctualityRate;//准点率

@property (nonatomic, strong) NSString *arrAirPortFullNameShort;//到达机场简称
@property (nonatomic, strong) NSString *arrAirPortShortNameShort;//到达机场简称
@property (nonatomic, strong) NSString *arrTerminal;//到达航站楼
@property (nonatomic, strong) NSString *arrTime;//到达时间
@property (nonatomic, strong) NSString *planeStyle;//机型（空客 A320）
@property (nonatomic, strong) NSString *planeSize;//"1-小型飞机2-中型飞机3-大飞机 其它
@property (nonatomic, strong) NSString *planeCode;//机型编号（320）
@property (nonatomic, strong) NSString *stopNum;//经停次数
@property (nonatomic, strong) NSString *meal;//餐食标识（true/false）
@property (nonatomic, strong) NSString *buildfee;//基建费
@property (nonatomic, strong) NSString *fuelfee;//燃油费
@property (nonatomic, strong) NSString *childFuelFee;//儿童燃油费
@property (nonatomic, strong) NSString *isShare;//是否共享航班（true/false）
@property (nonatomic, strong) NSString *shareFlightNo;//共享航班号，即实际承运方的航班号
@property (nonatomic, strong) NSString *shareAirlineName;//共享航班号，即实际承运方的航班号
@property (nonatomic, strong) NSString *duration;//飞行时长，单位为分钟
@property (nonatomic, strong) NSString *mileage;//航班里程数
@property (nonatomic, strong) NSMutableArray *stopItems;//经停信息，参考 Stop Element
@property (nonatomic, strong) NSMutableArray *cabins;//舱位列表，参考 Cabin Element
//订单详情页需要
@property (nonatomic, strong) NSString *serialId;//订单流水号
@property (nonatomic, strong) NSString *baseCabinDesc;//基础仓位类型描述（经济舱）

@property (nonatomic, strong) NSString *ruleRemark;//行李额
@property (nonatomic, strong) NSMutableArray *flightPassengers;//航班下乘客列表

@property (nonatomic, strong) NSMutableArray *refundPassengers;//退票乘客

@property (nonatomic, strong) NSString *feeEstimated;//费用是否预估成功
@property (nonatomic, strong) NSString *outTicketTime;//出票时间
@property (nonatomic, strong) NSString *ticketExpired;//客票是否已过期//0：未过期，1：已过期

@property (nonatomic, strong) NSMutableArray *endorsePassengers;//改签乘客
@property (nonatomic, strong) NSString *createDate;

#pragma mark - 低价日历
@property (nonatomic, strong) NSString *date; //出发日期(格式YYYY-MM-dd)
@property (nonatomic, strong) NSString *depCode; //出发地主机场三字码
@property (nonatomic, strong) NSString *arrCode; //到达地主机场三字码
@property (nonatomic, strong) NSString *lowestPrice; //当日(成人)最低票面价

- (cabins *)getLowestCabin;

- (cabins *)getChangeLowstCabin;

- (cabins *)getLowestCabinWithCabinFilters:(nullable NSMutableArray*)cabinFilters;

@end

@interface filters : NSObject

@property (nonatomic, strong) NSString *name;//
@property (nonatomic, strong) NSString *type;//
@property (nonatomic, strong) NSMutableArray *items;

@end

@interface items : NSObject

@property (nonatomic, strong) NSString *key;//
@property (nonatomic, strong) NSString *value;//

@end

@interface ResponseSearchFlightlist : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *flights;//航班信息
@property (nonatomic, strong) NSMutableArray *filters;//筛选


@end

NS_ASSUME_NONNULL_END
