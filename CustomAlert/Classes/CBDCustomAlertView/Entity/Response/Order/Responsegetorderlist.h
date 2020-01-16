//
//  Responsegetorderlist.h
//  CarBaDa
//
//  Created by zhang on 15/6/29.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"
@class cancelReason;

@interface arrWeather : NSObject
@property (nonatomic, strong) NSString *miniTemp;//最低温度
@property (nonatomic, strong) NSString *maxTemp;//最高温度
@property (nonatomic, strong) NSString *picture;//天气图片

@end

@interface orderList : NSObject
@property (nonatomic, strong) NSString *arrCityId; //到达地id（汽车票、火车票、酒店使用）
@property (nonatomic, strong) NSString *orderId;//订单id
@property (nonatomic, strong) NSString *projectType;//项目类型 1汽车票2用车3定制巴士4校园巴士5机场巴士
@property (nonatomic, strong) NSString *createTime;//订单创建时间
@property (nonatomic, strong) NSString *orderSerialId;//订单流水号
@property (nonatomic, strong) NSString *departure;//出发城市
@property (nonatomic, strong) NSString *destination;//到达城市
@property (nonatomic, strong) NSString *dptDateTime;//出发时间
@property (nonatomic, strong) NSString *dptStation;//出发站点
@property (nonatomic, strong) NSString *arrStation;//到达站点
@property (nonatomic, copy) NSString *displayArrStation;//外显到达车站名称  v340
@property (nonatomic, strong) NSString *totalAmount;//订单金额
@property (nonatomic, strong) NSString *orderState;//订单状态
@property (nonatomic, strong) NSString *orderStateName;//订单状态描述
@property (nonatomic, strong) NSString *ifCanCancel;//是否需要显示取消按钮
@property (nonatomic, strong) NSString *ifCanPay;//是否需要显示支付按钮
@property (nonatomic, strong) NSString *isCanDelete;//是否需要显示删除按钮
@property (nonatomic, strong) NSString *payExpireDate;//支付超时时间
@property (nonatomic, strong) NSArray *dptTimeDetail;//出发时间明细，用于客户端列表页展示
@property (nonatomic, strong) NSString *serverTime;//服务器时间
@property (nonatomic, strong) NSString *ifCanEvaluation;//是否可评价
@property (nonatomic, strong) NSString *HasEvaluation;
@property (nonatomic, strong) NSArray *orderPayDetail;//进入支付页显示的信息
@property (nonatomic, strong) NSString *coachNo;//火车车次
@property (nonatomic, strong) NSString *trainTicketModel;//火车票购票方式	0、巴士管家购票 1、12306购票
@property (nonatomic, strong) NSString *productId;//游运项目的产品id
@property (nonatomic, strong) NSString *productName;//产品名称
@property (nonatomic, strong) NSString *tcSerialId;//同程订单流水号
@property (nonatomic, strong) NSString *isChangeTicket;//是否为改签票
@property (nonatomic, strong)NSString *isGrabTicket;//是否为抢票单
@property (nonatomic, strong) NSString *isUnionOrder;//是否为中转换乘
@property (nonatomic, strong) NSString *isStudentTicket;//是否为学生票
@property (nonatomic, strong) NSString *oldTicketSerialId;
@property (nonatomic, strong) NSString *payUrl;//酒店支付地址
@property (nonatomic, strong) NSArray *packageTagList;
@property (nonatomic, strong) NSString *ifLiveChat;//在线客服按钮
@property (nonatomic, strong) NSString *liveChatUrl;//在线客服链接地址
@property (nonatomic, strong) NSString *isBookingHotel;//预订酒店
@property (nonatomic, strong) NSString *weatherImgUrl;//天气图片地址前缀
@property (nonatomic, strong) NSString *isAddCalendar;//添加日历按钮
@property (nonatomic, strong) NSString *dptLng;//出发站的经度
@property (nonatomic, strong) NSString *dptLat;//出发站的纬度
@property (nonatomic, strong) NSString *arrivalTime;//到达时间
@property (nonatomic, strong) arrWeather *arrWeather;//天气信息
@property (nonatomic, strong) NSString *dptEndDateTime;//汽车票流水班的截止时间
@property (nonatomic, strong) NSString *checkInDate;//酒店入住时间
@property (nonatomic, strong) NSString *checkOutDate;//酒店离店时间
@property (nonatomic, strong) NSString *lineType;//城际快线 站务线：1 非站务线2
@property (nonatomic, strong) NSString *orderResource; //0 巴管；1同程
@property (nonatomic, strong) NSString *webAppUrl;//滴滴地址
@property (nonatomic, strong) NSString *payMode;//0预支付； 1后支付
@property (nonatomic, strong) NSString *departInfo;//出发信息，机票cell有，拼入
@property (nonatomic, strong) NSString *days;//用车天数，包车用
@property (nonatomic, strong) NSString *ticketCheck;//检票口
@property (nonatomic, strong) NSString *usefor;//包车区分1、接机包车 2、送机包车 4、国内包车 9、包天包车 10、定制包车
@property (nonatomic, strong) NSString *isAirport;//是否显示接送机
@property (nonatomic, strong) NSString *insuranceAmount;//保险总金额V500
@property (nonatomic, assign) BOOL isSelected;//V500 发票列表选中时赋值 非接口返回

//531新增 开票列表
@property (nonatomic, strong) NSString *mailSerialid;//发票号
@property (nonatomic, strong) NSString *projectName;//项目名称
@end

@interface weatherList : NSObject
@property (nonatomic, strong) NSMutableArray *dayWeatherList; //不同日期下的天气信息
@property (nonatomic, strong) NSString *cityId; //城市id
@end

@interface dayWeatherList : NSObject
@property (nonatomic, strong) NSString *date; //日期，yyyy-M-d
@property (nonatomic, strong) NSString *miniTemp; //最低温度
@property (nonatomic, strong) NSString *maxTemp; //最高温度
@property (nonatomic, strong) NSString *mainInfo; //天气说明
@property (nonatomic, strong) NSString *imgUrl; //天气图标icon
@end

@interface projectFilterList : NSObject
@property (nonatomic, strong) NSString *projectName; //项目名称
@property (nonatomic, strong) NSString *projectType; //项目名称

@end

@interface Responsegetorderlist : NSObject
@property (nonatomic, strong) NSMutableArray *orderList;
@property (nonatomic, strong) NSMutableArray *weatherList; //天气列表
@property (nonatomic, copy) NSArray *cancelReason;
@property (nonatomic, strong) pageInfo *pageInfo;
@property (nonatomic, strong) NSMutableArray *projectFilterList;//筛选项目列表

@end
