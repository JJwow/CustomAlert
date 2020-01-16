//
//  RequestGetReschulingBusList.h
//  CarBaDa
//
//  Created by John on 2018/7/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetReschulingBusList : TCTRequestObject

@property (nonatomic, strong)NSString *arrStation;//改签到达车站

@property (nonatomic, strong)NSString *departure;//出发地

@property (nonatomic, strong)NSString *destination;//到达地

@property (nonatomic, strong)NSString *dptDate;//出行日期 例:2018-07-14

@property (nonatomic, strong)NSString *dptStation;//改签出发车站

@property (nonatomic, strong)NSString *freeChildCount;//改签携童人数

@property (nonatomic, strong)NSString *isFilterOrderSchedule;//是否过滤订单车次    0：否，1：是

@property (nonatomic, strong)NSString *isFilterLimit;//是否过滤订单车次    是否过滤出发到达集合不限    0：显示 1：不显示

@property (nonatomic, strong)NSString *isScrollCoach;//是否流水班    0：否 1：是

@property (nonatomic, strong)NSString *orderArrivalStation;//原订单到达车站

@property (nonatomic, strong)NSString *orderCoachNo;//原订单班次号

@property (nonatomic, strong)NSString *orderCoachType;//原订单班次类型

@property (nonatomic, strong)NSString *orderDeparture;//原订单出发地

@property (nonatomic, strong)NSString *orderDepartureStation;//原订单出发车站

@property (nonatomic, strong)NSString *orderDestination;//原订单到达地

@property (nonatomic, strong)NSString *orderDptDateTime;//原订单发车时间    例：2018-07-16 12:05:00

@property (nonatomic, strong)NSString *orderTicketPrice;//原订单票价（票面单价）

@property (nonatomic, strong)NSString *peopleCount;//改签人数（根据新接口返回的乘客，根据实际情况返回人数，第一版不能单个乘客改，所以是接口返回的总人数）

@property (nonatomic, strong)NSString *price;//票价（改签列表需要筛选的票价，第一版只能平改所以传原订单相同的票价）    如果票价不传或传0，取所有班次，如果票价大于0元，只取等于票价的班次

@property (nonatomic, strong)NSString *scrollCoachDate;//原订单流水班日期    如果isScrollCoach=1 流水班日期，必须填写，例：2018-07-19

@property (nonatomic, strong)NSString *supplierKey;//供应Key    订单供应商Key

@property (nonatomic,strong) NSArray *categoryList;

@end
