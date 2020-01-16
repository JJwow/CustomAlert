//
//  Requestcreatebusorder.h
//  CarBaDa
//
//  Created by Alex on 15/6/24.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseGetbusschedule.h"
#import "Responsegetlinkerinfos.h"
#import "Responsegetredpackagelist.h"
#import "ResponseGetInsurances.h"
#import "ResponseGetLineDetail.h"
#import "ResponseGetMailInfos.h"
#import "ResponseGetPackages.h"
#import "ResponseGetConfigByLine.h"
#import "ResponseGetInvoiceTitle.h"
#import "ResponsePolicygetsell.h"

@class HotelInvoiceWriteInfo;

@interface invoiceDetail : NSObject
@property (nonatomic, copy) NSString *province;//省
@property (nonatomic, copy) NSString *city;//市
@property (nonatomic, copy) NSString *county;//区
@property (nonatomic, copy) NSString *address;//地址
@property (nonatomic, copy) NSString *contacts;//联系人
@property (nonatomic, copy) NSString *mobile;//电话

//酒店需要
@property (nonatomic, copy) NSString *mailName;//发票收件人
@property (nonatomic, copy) NSString *invoiceType;//发票类型（1.电子发票、2.纸质发票）[新]
@property (nonatomic, copy) NSString *invoiceEmail;//邮件地址[新]

@property (nonatomic, copy) NSString *mailPhone;//发票收件人手机号
@property (nonatomic, copy) NSString *mailProvince;//发票邮寄省
@property (nonatomic, copy) NSString *mailCity;//发票邮寄市
@property (nonatomic, copy) NSString *mailDistrict;//发票邮寄区
@property (nonatomic, copy) NSString *mailAddress;//邮寄地址
@property (nonatomic, copy) NSString *invoiceTitleId;//发票抬头Id
@property (nonatomic, copy) NSString *isRemarkInfo;//是否备注酒店名和入离日期（0：不备注；1：备注）[新]
@property (nonatomic, copy) NSString *payMethod;//支付方式(到付0)[新]

@property (nonatomic, copy) NSString *invoiceTitle;//发票抬头
@property (nonatomic, copy) NSString *customerIdentification;//识别码

+ (instancetype)initWithmailList:(mailList *)m;

//酒店
+ (instancetype)initWithInvoiceWriteInfo:(HotelInvoiceWriteInfo *)hotelInvoiceWriteInfo;

@end

@interface refundDetail : NSObject
@property (nonatomic,copy) NSString *refundState;//退票状态：0-未请求退票，1-请求退票，2-退票成功，3-退票失败
@property (nonatomic,copy) NSString *refundButtonType;//按钮类型：0-不展示任何按钮；1-退票按钮；2-置灰的退票按钮;3-处理中；4-查看退款进度；5-查看失败原因
@property (nonatomic,copy) NSString *refundFailMsg;//退票失败原因

//退款明细专用
@property (nonatomic,copy) NSString *amountType;//0-正数，1-扣减金额
@property (nonatomic,copy) NSString *amountName;//金额名称
@property (nonatomic,copy) NSString *amount;//金额
@end

@interface passengersInfo  : NSObject
@property (nonatomic,copy) NSString *name;//	string	姓名	“许金益”
@property (nonatomic,copy) NSString *passengerType;//	string	老人/小孩/成人	固定传 “1”
@property (nonatomic,copy) NSString *idType;//	string	证件类型	固定 “1”  身份证
@property (nonatomic,copy) NSString *idCard;//	string	证件号码	“320501198205312257”
@property (nonatomic,strong) identityInfo *identityInfo;
@property (nonatomic,copy) NSString *mobileNo;
@property (nonatomic,copy) NSString *insOrderSerial;
@property (nonatomic,copy) NSString *birthday;
@property (nonatomic,copy) NSString *birthDay;//拼车专用
@property (nonatomic,copy) NSString *passSerialId;//乘客流水号
@property (nonatomic,strong) refundDetail *refundDetail;//退票信息
+(instancetype)initWithLinker:(linkerList*)l;
+(instancetype)initWithFreeChildDic:(NSDictionary *)dicChild;
@end

@interface contactInfo  : NSObject
@property (nonatomic,copy) NSString *name;//	string	姓名
@property (nonatomic,copy) NSString *mobileNo;//	string	手机号
@property (nonatomic,copy) NSString *idType;//	string	证件类型
@property (nonatomic,copy) NSString *idCard;//	string	证件号码
@property (nonatomic,copy) NSString *passengerType;
@property (nonatomic,strong) identityInfo *identityInfo;
+(instancetype)initWithLinker:(linkerList*)l;
@end

@interface ticketsInfo  : NSObject
@property (nonatomic,copy) NSString *coachNo;//	string	车次	"0063960"
@property (nonatomic,copy) NSString *departure;//	string	出发城市	"上海"
@property (nonatomic,copy) NSString *dptStation;//	string	出发车站	"上海长途客运南站"
@property (nonatomic,copy) NSString *destination;//	string	到达城市	"苏州"
@property (nonatomic,copy) NSString *arrStation;//	string	到达车站	"苏州 南站"
@property (nonatomic,copy) NSString *dptDateTime;//	string	发车日期时间	"2015-06-19 06:33:00"
@property (nonatomic,copy) NSString *dptDate;//	string	发车日期	"2015-06-19"
@property (nonatomic,copy) NSString *dptTime;//	string	发车时间	06:33:00
@property (nonatomic,copy) NSString *ticketPrice;//	string	单价	"38"
@property (nonatomic,copy) NSString *childPrice; // 儿童票价 by Jabir添加 2015-8-8
@property (nonatomic,copy) NSString *ticketFee;//	string	代理费	"0"
@property (nonatomic,copy) NSString *coachType;//	string	车型	"大型高二"
@property (nonatomic,copy) NSString *isScrollCoach;
@property (nonatomic,copy) NSString *endOperationTime;
@property (nonatomic,copy)NSString *DptStationCode;//出发车站code
@property (nonatomic,copy)NSString *serviceFee;//巴管手续费
@property (nonatomic,copy)NSString *remark;

+(instancetype)initWithScheduleList:(scheduleList*)tInfo;
+(instancetype)initWithShiftItems:(shiftItems *)tInfo departure:(NSString *)sDeparture destination:(NSString *)sDestination dptDateTime:(NSString *)sDptDateTime;

@end

@interface packageDetail : NSObject
@property (nonatomic,copy) NSString *packageAmount;//套餐总额
@property (nonatomic,copy) NSString *packageCount;//套餐份数
@property (nonatomic,copy) NSString *packageId;//套餐id
@property (nonatomic,copy) NSString *packagePrice;//套餐单价
@property (nonatomic,copy) NSString *toAdditionalAmount;
@property (nonatomic,copy) NSString *toAdditionalPrice;
@end

@interface cbdVipCard : NSObject
@property (nonatomic,copy) NSString *cbdVipCardId;//超级管家卡Id
@property (nonatomic,copy) NSString *freeFeeAmount;//免服务费总金额
@property (nonatomic,copy) NSString *freeFeeCount;//免服务费份数
@property (nonatomic,copy) NSString *freeFeePrice;//免服务费单张金额
@property (nonatomic,copy) NSString *reductAmount;//立减金额
//未购买超极管家卡时需要的参数
@property (nonatomic,copy) NSString *cbdVipCardType;//购买卡的类型
@property (nonatomic,copy) NSString *cbdVipCardPrice;//卡购买的卡金额

@end

@interface policyDetail : NSObject
@property (nonatomic,copy) NSString *policyId;//政策id
@property (nonatomic,copy) NSString *policySellAmount;//政策实际售价（单份价格）
@property (nonatomic,copy) NSString *policyTitle;//政策名称
@property (nonatomic,copy) NSArray *policyProductList;//政策包含的产品
@end

@interface Requestcreatebusorder : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;//	string	会员id	密文
@property (nonatomic,copy) NSString *count;//	string	票数	“2”
@property (nonatomic,copy) NSString *childCount;// 儿童票  by Jabir添加2015-8-8
@property (nonatomic,copy) NSString *totalAmount;//	string	总票价	票价*人数
@property (nonatomic,copy) NSString *insuranceId;//	string	保险类型id	无保险 传”0”
@property (nonatomic,copy) NSString *insuranceAmount;//	string	保险总价	无保险 传”0”
@property (nonatomic,copy) NSString *InsurancePrice;//保险单价
@property (nonatomic,copy) NSString *activityType;//	string	活动类型	无活动 传”0”
@property (nonatomic,copy) NSString *activityId;//	string	活动ID	无则传”0”
@property (nonatomic,copy) NSString *reductAmount;//	string	立减金额	无则传”0”
@property (nonatomic,copy) NSString *couponCode;//	string	红包编号	无则传”0”
@property (nonatomic,copy) NSString *couponAmount;//	string	红包金额	无则传”0”
@property (nonatomic,copy) NSString *SessionId;//	string	回话id	无则传””
@property (nonatomic,strong) ticketsInfo *ticketsInfo;
@property (nonatomic,strong) NSMutableArray *passengersInfo;
@property (nonatomic,strong) contactInfo *contactInfo;
@property (nonatomic,copy) NSString *orderType;//0汽车票 1校园巴士 2机场巴士
@property (nonatomic,copy) NSString *freeChildCount;//携童票的数量
@property (nonatomic,copy) NSString *freeAmount;//一元免单活动的金额，0-不参数
@property (nonatomic,strong) cbdVipCard *cbdVipCard;
@property (nonatomic,copy) NSString *isMailInvoice;//是否需要邮寄
@property (nonatomic,strong) invoiceDetail *invoiceDetail;//邮寄信息
@property (nonatomic,strong) packageDetail *packageDetail;
@property (nonatomic,copy) NSString *buyPackageType;//
@property (nonatomic,copy) NSString *isPassingStation;
@property (nonatomic,copy) NSString *isTicketHome;
@property (nonatomic,copy) NSString *ticketHomeFee;
@property (nonatomic,copy) NSString *speedFee;
@property (nonatomic,copy) NSString *cashCouponAmount;//代金券总金额
@property (nonatomic,strong) NSMutableArray *cashCouponList;//购买的代金券列表
@property (nonatomic,copy) NSString *mailInvoiceFee;//发票邮寄费
@property (nonatomic,copy) NSString *displayArrStation;//外显到达车站名称
@property (nonatomic,copy) NSString *dptProvince;//出发城市的省份
@property (nonatomic,copy) NSString *supplierKey;
@property (nonatomic,copy) NSString *ticketOutType;//购票类型，0-普通购票；2-预约购票
@property (nonatomic,copy) NSString *isAltShift;//是否勾选备选车次
@property (nonatomic,copy) NSString *dptCity;//出发所属城市
@property (nonatomic,copy) NSString *arrProvince;//到达所属省份
@property (nonatomic,copy) NSString *arrCity;//到达所属城市
@property (nonatomic,copy) NSString *marketingId;//营销id
@property (nonatomic,copy) NSString *isJoinTrain;//是否火车票联乘单
@property (nonatomic,copy) NSString *bookingType;//0-先付款，1-先占座
@property (nonatomic,strong) policyDetail *policyDetail;
@property (nonatomic,copy) NSString *isLabel;//0-没有标签 ；1-有标签

-(instancetype)initWithTicksInfo:(scheduleList*)tInfo passengers:(NSMutableArray*)passenger getTicker:(linkerList*)getTicker couponList:(memberCouponList*)couponItem childrenCount:(NSInteger)iChildren freeChildCount:(NSInteger)iFreeChildren insurance:(packageList *)insuranceItem mailList:(mailList *)mailList freeAmount:(NSString *)sFreeAmount GetConfigByLine:(ResponseGetConfigByLine *)responseGetConfigByLine freeChildPassengers:(NSMutableArray *)aFreeChildPassengers;

@end
