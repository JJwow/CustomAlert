//
//  ResponseGetTrainOrderInfo.h
//  CarBaDa
//
//  Created by zhaitong on 15/12/1.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetbusorderdetail.h"
@interface travelServiceList : NSObject
@property (nonatomic, strong) NSString *serviceType;//类型（1、政策保险，2、政策红包，3、优惠券，4、一元免单
@property (nonatomic, strong) NSString *serviceName;//名称
@property (nonatomic, strong) NSString *serviceDesc;//价格
@end

@interface orderPriceList : NSObject
@property (nonatomic, strong) NSString *priceName;//收款内容
@property (nonatomic, strong) NSString *priceAmount;//收款金额
@property (nonatomic, strong) NSString *priceType;//类型（1、收款项，2、减扣项）
@end
@interface speedupPacks : NSObject
@property (nonatomic, strong) NSString *count;
@property (nonatomic, strong) NSString *price;
@end
@interface packages : NSObject
//V440
@property (nonatomic, strong) NSString *insStatus;//投保状态
@property (nonatomic, strong) NSString *insuranceId;//保险id
@property (nonatomic, strong) NSString *note;
@property (nonatomic, strong) NSString *packageId;//套餐id
@property (nonatomic, strong) NSString *packageName;//套餐名
@property (nonatomic, strong) NSString *packagePrice;//套餐价格
@property (nonatomic, strong) NSString *passengerName;//被保人
@property (nonatomic, strong) NSString *policyHolder;//投保人
@property (nonatomic, strong) NSString *policyNumber;//保单号
@end
@interface subOrder : NSObject
@property (nonatomic, copy) NSString *balancePrice;//差价退款金额
@property (nonatomic, copy) NSString *fromDate; //发车日期
@property (nonatomic, copy) NSString *fromPassType; //判断是否途经站
@property (nonatomic, copy) NSString *fromStationCode; //发车站拼音
@property (nonatomic, copy) NSString *fromStationName; //发车站
@property (nonatomic, copy) NSString *fromTime; //发车时间
@property (nonatomic, copy) NSString *seatName; //座位名称
@property (nonatomic, copy) NSString *seatType; //座位类型
@property (nonatomic, copy) NSString *ticketCount; //订票数量
@property (nonatomic, copy) NSString *ticketNo; //取票号
@property (nonatomic, copy) NSString *ticketPrice;//单张票价
@property (nonatomic, copy) NSString *insuranceAmount;//保险总额
@property (nonatomic, copy) NSString *toDate; //到达日期
@property (nonatomic, copy) NSString *toTime; //到达时间
@property (nonatomic, copy) NSString *toPassType; //判断是否途经站
@property (nonatomic, copy) NSString *toStationCode; //到达站拼音
@property (nonatomic, copy) NSString *toStationName; //到达站
@property (nonatomic, copy) NSString *trainNo; //车次号
@property (nonatomic, copy) NSString *grabSeatName;//抢票单所选坐席
@property (nonatomic, copy) NSString *grabAlternativeDates;//抢票备选日期
@property (nonatomic, copy) NSString *ticketGate;//检票口
@property (nonatomic, copy) NSString *fromStationLon;//出发站经度
@property (nonatomic, copy) NSString *fromStationLat;//出发站纬度
@property (nonatomic, copy) NSString *toStationLon;//到达站经度
@property (nonatomic, copy) NSString *toStationLat;//到达站纬度
@property (nonatomic, copy) NSString *fromStationCityId;//出发站城市id
@property (nonatomic, copy) NSString *toStationCityId;//到达站城市id
@property (nonatomic, copy) NSString *fromStationCityName;//出发站城市名称
@property (nonatomic, copy) NSString *toStationCityName;//到达站城市名称
@property (nonatomic, copy) NSString *hotelFromStationName;//请求酒店推荐的出发名
@property (nonatomic, copy) NSString *hotelToStationName;//请求酒店推荐的到达名
@property (nonatomic, strong) NSString *isStopSale;//是否停运-V430非接口
@property (nonatomic, strong) NSString *grabAlternativeSeats;//备选座次-V440
@property (nonatomic, strong) NSString *grabAlternativeTrainNos;//备选车次-V440
@property (nonatomic, copy) NSArray *couponList;//优惠券列表
@property (nonatomic, copy) NSArray *passengerList; //乘客列表
@property (nonatomic, strong) NSArray *packages;//套餐-V440
@end

@interface grabShareItem : NSObject
@property (nonatomic, copy) NSString *isShowIcon; //是否显示分享Icon
@property (nonatomic, copy) NSString *shareImageUrl; //分享缩略图地址
@property (nonatomic, copy) NSString *shareDescription; //分享描述
@property (nonatomic, copy) NSString *shareUrl; //分享url地址
@property (nonatomic, copy) NSString *iconUrl; //分享icon_url地址
@end

@interface grabBuddyAcceleration : NSObject
@property (nonatomic, copy) NSString *icon;//icon图片地址
@property (nonatomic, copy) NSString *isShowIcon; //是否显示分享Icon
@end

@interface couponList : NSObject
@property (nonatomic, copy) NSString *couponCount;//券数量
@property (nonatomic, copy) NSString *couponName;//券名称
@property (nonatomic, copy) NSString *couponPrice;//券金额
@end

@interface trainShareItem : NSObject
@property (nonatomic, copy) NSString *isShowIcon; //是否显示分享Icon
@property (nonatomic, copy) NSString *shareImageUrl; //分享缩略图地址
@property (nonatomic, copy) NSString *shareDescription; //分享描述
@property (nonatomic, copy) NSString *shareUrl; //分享url地址
@property (nonatomic, copy) NSString *iconUrl; //分享icon_url地址
@end

@interface totalOrderDetails : NSObject
@property (nonatomic, copy) NSString *discountAmount;//红包金额
@property (nonatomic, copy) NSString *insPrice;//保险金额
@property (nonatomic, copy) NSString *insCount;//保险张数
@property (nonatomic, copy) NSString *mailCharge;//车票配送费用
@property (nonatomic, copy) NSString *serviceCharge;//代购费用
@property (nonatomic, copy) NSString *serviceChargeCount;//代购票数
@property (nonatomic, copy) NSString *childCount;//儿童数
@property (nonatomic, strong) NSString *adultCount;//成人数
@property (nonatomic, strong) NSString *childTicketPrice;//儿童票价-V420
@property (nonatomic, copy) NSString *trainAmount;//火车票价格
@property (nonatomic, copy) NSString *cashcouponPrice;//优惠券抵用价格-V420
@property (nonatomic, strong) NSString *vipReduceAmount;//管家权益立减 V460
@end

@interface postInfo : NSObject
@property (nonatomic, copy) NSString *expressNo;//快递单号
@property (nonatomic, copy) NSString *mailCompany;//快递公司
@property (nonatomic, copy) NSString *address;//=收件人人地址
@property (nonatomic, copy) NSString *mobile;//收件人手机
@property (nonatomic, copy) NSString *person;//收件人名字
@property (nonatomic, copy) NSString *mailzip;//邮编
@property (nonatomic, copy) NSString *mailStatus;//邮寄状态 0:未知，1:正在打包，2:已邮寄
@property (nonatomic, copy) NSString *mailStatusDesc;//邮寄状态
@property (nonatomic, copy) NSString *buyFee;//代购费
@property (nonatomic, copy) NSString *mailFee;//邮寄费

//机票下单需要
@property (nonatomic, strong)NSString *province;//省
@property (nonatomic, strong)NSString *city;//市
@property (nonatomic, strong)NSString *area;//所在地区
//@property (nonatomic, strong)NSString *address;//详细地址
@property (nonatomic, strong)NSString *linkman;//收件人
@property (nonatomic, strong)NSString *phone;//手机号

@end

@interface changeButton : NSObject
@property (nonatomic, copy) NSString *isVisiable;
@property (nonatomic, copy) NSString *isEnable;
@end

@interface refundButton : NSObject
@property (nonatomic, copy) NSString *isVisiable;
@property (nonatomic, copy) NSString *isEnable;
@end

@interface viewChangeTicketButton : NSObject
@property (nonatomic, copy) NSString *isVisiable;
@property (nonatomic, copy) NSString *isEnable;
@end

@interface viewOldSheetButton : NSObject
@property (nonatomic, copy) NSString *isVisiable;
@property (nonatomic, copy) NSString *isEnable;
@end

@interface ifPackage : NSObject
@property (nonatomic, copy) NSString *isEnable;
@property (nonatomic, copy) NSString *isVisiable;
@end

@interface passengerList :NSObject
@property (nonatomic, copy) NSString *idCard; //证件号
@property (nonatomic, copy) NSString *idType; //证件类型
@property (nonatomic, copy) NSString *name; //乘客姓名
@property (nonatomic, copy) NSString *passengerType; //乘客类型
@property (nonatomic, copy) NSString *passengerId;//获取退款进度用
@property (nonatomic, copy) NSString *seatNo; //座位号
@property (nonatomic, copy) NSString *ticketState;//车票状态码
@property (nonatomic, copy) NSString *ticketStateName;//车票状态描述
@property (nonatomic, copy) NSString *policyNumber;//保单号
@property (nonatomic, copy) NSString *insPrice;//保险单价
@property (nonatomic, copy) NSString *ticketPrice;//单张票价
@property (nonatomic, strong) refundButton *refundButton;//是否显示退票按钮
@property (nonatomic, strong) changeButton *changeButton;//是否显示改签按钮
@property (nonatomic, copy) NSString *refundProcess;//是否显示退票进程按钮
@property (nonatomic, copy) NSString *bgPassengerId;//巴管的乘客id
@property (nonatomic, strong) viewChangeTicketButton *viewChangeTicketButton;//查看改签单按钮
@property (nonatomic, strong) viewOldSheetButton *viewOldSheetButton;//查看原订单按钮
@property (nonatomic, copy) NSString *oldSerialId;//查看改签单或者查看原订单字段
@property (nonatomic, copy) NSString *ticketOutNote;//出票成功取票信息
@property (nonatomic, copy) NSString *packageId;//套餐Id
@property (nonatomic, copy) NSString *packageName;//套餐名
@property (nonatomic, copy) NSString *packagePrice;//套餐价格
@property (nonatomic, strong) ifPackage *ifPackage;
@property (nonatomic, copy) NSString *seatTag;//座位位置	1:靠窗 2:过道
@end

@interface showButtons : NSObject
@property (nonatomic, copy) NSString *ifCanCancel;
@property (nonatomic, copy) NSString *ifCanPay;
@property (nonatomic, copy) NSString *ifContinueBook;
@property (nonatomic, copy) NSString *ifRefresh;
@property (nonatomic, copy) NSString *ifBookReturn;
@property (nonatomic, strong) NSString *ifContinueGrab;//继续抢票
@property (nonatomic, strong) NSString *ifGrabProcess;//刷新抢票进度
@property (nonatomic, copy) NSString *ifCanCancelGrab;//取消抢票
@property (nonatomic, strong) NSString *ifCanAcceleratorGrab;//好友加速
@end
@interface ResponseGetTrainOrderInfo : NSObject
@property (nonatomic, copy) NSString *memberId; //会员ID
@property (nonatomic, copy) NSString *orderId; //订单ID
@property (nonatomic, copy) NSString *orderState; //订单状态
@property (nonatomic, copy) NSString *orderStateName; //订单状态名称
@property (nonatomic, copy) NSString *serialId; //订单流水号
@property (nonatomic, copy) NSString *ticketPrice; //单张票价
@property (nonatomic, copy) NSString *payExpireDate; //过期时间
@property (nonatomic, copy) NSString *serverTime;//服务器时间
@property (nonatomic, copy) NSString *outTicketFailMsg;//出票失败原因
@property (nonatomic, copy) NSString *ticketModel; //购票方式	0、代购 1、自购、2、送票上门
@property (nonatomic, copy) NSString *occupySeatState;//占座状态0：占座中 1：占座成功 2：占座失败 3：Other
@property (nonatomic, copy) NSString *purchaseModel;//0：先付款后占座 1：先占座后付款
@property (nonatomic, copy) NSString *mailcharge;//配送费用
@property (nonatomic, copy) NSString *servicecharge;//代购费用
@property (nonatomic, copy) NSString *changeType;//改签类型，低改高是3
@property (nonatomic, copy) NSString *oldPassengerId;//旧单乘客Id
@property (nonatomic, copy) NSString *oldSerialId;//查看旧订单或者查看改签单
@property (nonatomic, copy) NSString* cancelReason;
@property (nonatomic, copy) NSString *isNight;//是否夜间单
@property (nonatomic, copy) NSString *createTime;//订单创建时间
@property (nonatomic, copy) NSString *isGrabOrder;//是否抢票单
@property (nonatomic, copy) NSString *isOfflineOrder;//是否送票上门订单
@property (nonatomic, copy) NSString *isStudent;//是否是学生票
@property (nonatomic, copy) NSString *isBuyOneyuanFree;//是否购买一元免单
@property (nonatomic, copy) NSString *acceleratorPackCount;//加速包数量
@property (nonatomic, copy) NSString *outTicketFailCode;//出票失败原因码
@property (nonatomic, copy) NSArray *orderPayDetail;
@property (nonatomic, copy) NSString *grabStartTime;//抢票开始时间
@property (nonatomic, copy) NSString *grabCloseTime;//抢票结束时间
@property (nonatomic, copy) NSString *grabCountDownTime;//开始抢票倒计时
@property (nonatomic, copy) NSString *grabFrequency;//抢票频率
@property (nonatomic, copy) NSString *grabSuccessRate;//抢票成功率
@property (nonatomic, copy) NSString *totalGrabTimes;//总抢票次数
@property (nonatomic, copy) NSString *oneyuanFreeCount;//一元免单数量
@property (nonatomic, copy) NSString *showRangeStopEntrance;//上车补票入口
@property (nonatomic, copy) NSString *showGrabEntrance;//是否显示去抢票的入口
@property (nonatomic, copy) NSString *queryKey;//查询用的key
@property (nonatomic, copy) NSString *grabAccelerateRate;//抢票助力概率
@property (nonatomic, copy) NSString *encryptedOrderId;//加密orderID
@property (nonatomic, copy) NSString *memberWealAcceleratorPacks;//会员福利赠送加速包的数量-V370
@property (nonatomic, copy) NSString *memberLevel;//会员等级-V370
@property (nonatomic, strong) NSString *showCashcoupon;//是否需要显示优惠券入口-V420
@property (nonatomic, strong) NSString *totalAmount;//订单总额
@property (nonatomic, strong) NSString *refreshRate;//页面刷新频率-Vt420
@property (nonatomic, strong) NSString *isStopSale;//是否停运-V430
@property (nonatomic, strong) NSString *payAmount;//支付价格-V430
@property (nonatomic, strong) NSString *accelerateLevel;//加速等级（0、1、2、3、4）-V440
@property (nonatomic, strong) NSString *buyAcceleratorPackCount;//显示购买加速包个数-V440
@property (nonatomic, strong) NSString *nextLevelAcceleratorPackCount;//下一级需要加速包个数-V440
@property (nonatomic, strong) NSString *nextLevel;//下一等级名称-V440
@property (nonatomic, strong) NSString *isGrabWithholding;//是否授权代扣订单（0、否，1、是）-V440
@property (nonatomic, copy) NSString *currAccelerateLevelDesc;//当前速度的描述 -V480
@property (nonatomic, copy) NSString *nextAccelerateLevelDesc;//下一级速度的描述 -V480
@property (nonatomic, strong) NSString *showGrabTask;//是否显示抢票任务-V440
@property (nonatomic, strong) NSString *memberWealNote;// 会员权益文案-V440
@property (nonatomic, strong) NSString *vipSpeedCount;//管家权益加速包 V460
@property (nonatomic, strong) NSString *cashHotelCouponBatchCode;//现金酒店优惠券批次号 V460
@property (nonatomic, strong) NSString *cashHotelCouponPrice;//现金酒店优惠券价格 V460
@property (nonatomic, strong) NSString *speedUpPackPrice;//加速包价格
@property (nonatomic, strong) NSString *valueAddedServices;//套餐价格
@property (nonatomic, strong) NSString *waitOrder;//候补下单， 0：否 1：是
@property (nonatomic, strong) NSString *waitOrderStatus;//候补订单状态（0、创建中，1、创建成功，2、创建失败）
@property (nonatomic, strong) NSArray *speedupPacks;//加速包
@property (nonatomic, strong) NSArray *travelServiceList;//行程服务列表V470
@property (nonatomic, strong) NSArray *orderPriceList;//价格明细列表V470


@property (nonatomic, strong) subOrder *subOrder;
@property (nonatomic, strong) postInfo *postInfo;//邮寄信息
@property (nonatomic, strong) showButtons *showButtons;
@property (nonatomic, strong) trainShareItem *trainShareItem;
@property (nonatomic, strong) grabShareItem *grabShareItem;//抢票成功分享icon
@property (nonatomic, strong) grabBuddyAcceleration *grabBuddyAcceleration;//好友助力icon
@property (nonatomic, strong) totalOrderDetails *totalOrderDetails; //订单总额明细
@end
