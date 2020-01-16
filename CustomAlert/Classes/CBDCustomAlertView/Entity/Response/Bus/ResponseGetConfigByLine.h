//
//  ResponseGetConfigByLine.h
//  CarBaDa
//
//  Created by zjb on 2017/3/6.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetConfigByLine : NSObject
@property (nonatomic, strong) NSString *ticketHome;
@property (nonatomic, strong) NSString *ticketHomeFee;
@property (nonatomic, strong) NSString *packageHToL;
@property (nonatomic, strong) NSString *showSpeed;
@property (nonatomic, strong) NSString *speedFee;
@property (nonatomic, strong) NSString *dptStationLat;
@property (nonatomic, strong) NSString *dptStationLng;
@property (nonatomic, strong) NSString *dptAddress;
@property (nonatomic, strong) NSString *isMailInvoice;
@property (nonatomic, strong) NSString *linkerNum;
@property (nonatomic, strong) NSString *isCashCoupon;
@property (nonatomic, strong) NSString *isFreeRealname;//免票儿童是否实名
@property (nonatomic, strong) NSString *isFreeRed;
@property (nonatomic, strong) NSArray *serviceFeeRemark;
@property (nonatomic, copy) NSString *serviceFee;//巴管手续费
@property (nonatomic, strong) NSString *dptProvince;
@property (nonatomic, strong) NSString *bookingTips;//购票提示文案(头部公告)
@property (nonatomic, copy) NSString *isAltShift;//备选车次，0-不展示；1-展示。
@property (nonatomic, copy) NSString *childPrice;//儿童票价
@property (nonatomic, copy) NSString *altShiftTips;//备选车次文案
@property (nonatomic, copy) NSString *isMultCertType;//是否支持多证件
@property (nonatomic, copy) NSString *isRefundTicket;//是否支持退票
@property (nonatomic, copy) NSString *isRealName;//是否实名
@property (nonatomic, copy) NSString *refundTicketTime;//可退票时间（分钟）
@property (nonatomic, copy) NSString *isFreeActive;//一元免单活动
@property (nonatomic, copy) NSString *refundRightLevel;//退票特权等级
@property (nonatomic, copy) NSString *exTicketTime;//预计出票时间
@property (nonatomic, copy) NSString *dptCityId;//出发站的出发城市id
@property (nonatomic, strong) NSString *freeActiveSelected;//判断订单总额是否小于100，如果是则默认购买1份；否则默认购买2份
@property (nonatomic, strong) NSString *freeActiveDesc;
@property (nonatomic, copy) NSString *endBookTime;//下单截止时间点（标准格式：yyyy-MM-dd hh:mm:sss.fff）
@property (nonatomic, copy) NSString *bookingType;//0-先付款，1-先占座
@property (nonatomic, copy) NSString *isChange;//是否支持改签
@property (nonatomic, copy) NSString *changeTime;//可改签时间分钟数
@property (nonatomic, copy) NSString *dptStationPhone;//出发车站电话
@property (nonatomic, copy) NSString *iseleInvoice;//是否支持电子发票【车票】
@property (nonatomic, copy) NSString *supportedCertTypes;//如果isMultCertType=1，该字段返回的是支持的证件类型，多个类型使用英文逗号隔开
@end
