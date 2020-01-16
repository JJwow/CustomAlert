//
//  Responsegetbusorderdetail.h
//  CarBaDa
//
//  Created by zhang on 15/6/30.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Requestcreatebusorder.h"
#import "ResponseGetActiveCouponList.h"
#import "IdentityInfo.h"

@interface mailDetail : NSObject
@property (nonatomic,strong) NSString *mailStatus;//邮寄状态
@property (nonatomic,strong) NSString *mailAddressee;//收件人
@property (nonatomic,strong) NSString *mailMobile;//手机
@property (nonatomic,strong) NSString *mailAddress;//    地址
@property (nonatomic,strong) NSString *mailStatusCode;//    邮寄状态Code
@property (nonatomic,strong) NSString *expressCode;//快递单号
@property (nonatomic,strong) NSString *expressCompany;//快递公司
@property (nonatomic,strong) NSString *mailState;//邮寄状态    0、处理中(无)；1、待邮寄；2、不可邮寄(已取消)；3、已邮寄；4、正在邮寄

@end

@interface refedTicketDetail : NSObject
@property (nonatomic,strong) NSString *getRefedDetailType;//点击查看按钮的类型    0：直接弹出退票失败原因按钮 1：点击后调取退票进度接口显示退票进度 2：隐藏
@property (nonatomic,strong) NSString *refedFailMsg;
@property (nonatomic,strong) NSString *refedTicketName;//按钮名称    查看失败原因 查看退款进度
@property (nonatomic,strong) NSString *getRefedDetail;//退票失败原因
@property (nonatomic, copy) NSString *refendStatus;//退单状态（1、可以申请退单，2、申请退单中，3、退单成功，4、退单失败）

@end

@interface buttonDetail : NSObject
@property (nonatomic,strong) NSString *ifCanCancel;//    是否显示取消按钮
@property (nonatomic,strong) NSString *ifCanPay;//    是否显示支付按钮
@property (nonatomic,strong) NSString *ifContinueBook;//是否显示继续预定按钮
@property (nonatomic,strong) NSString *ifBookAgain;//    是否显示再次预订按钮
@property (nonatomic,strong) NSString *ifRefoundTicket;//是否显示退票按钮
@property (nonatomic,strong) NSString *canRefresh;//    刷新按钮
@property (nonatomic,strong) refedTicketDetail *refedTicketDetail;//按钮详情
@property (nonatomic,strong) NSString *changeButton;//改签按钮，0-无按钮；1-改签按钮，2-置灰改签按钮；3-查看改签单按钮
@property (nonatomic,strong) NSString *originalButton;//    查看原单按钮，0-无按钮；1-查看原单按钮
@end

@interface ticketInfo : NSObject
@property (nonatomic,strong) NSString *departure;//    出发城市
@property (nonatomic,strong) NSString *destination;//到达城市
@property (nonatomic,strong) NSString *dptStation;//    出发站点
@property (nonatomic,strong) NSString *arrStation;//到达站点
@property (nonatomic,strong) NSString *coachNo;//车次
@property (nonatomic,strong) NSString *coachType;//车型
@property (nonatomic,strong) NSString *dptDateTime;//    出发时间
@property (nonatomic,strong) NSString *dptDate;//出发日期
@property (nonatomic,strong) NSString *dptTime;//出发时间点
@property (nonatomic,strong) NSString *dptStationAddress;//出发站地址
@property (nonatomic,strong) NSString *arrDptStationAddress;//到达站地址
@property (nonatomic,strong) NSString *dptStationLat;//出发站纬度
@property (nonatomic,strong) NSString *dptStationLng;//出发车站经度
@property (nonatomic,strong) NSString *dptStationPhone;//出发站电话
@property (nonatomic,strong) NSString *endDateTime;//流水班最晚发车时间
@property (nonatomic,strong) NSString *remark;//线路备注信息    300新增
@property (nonatomic,strong) NSString *displayArrStation;//外显到达车站名称
@property (nonatomic, strong) NSString *isLabel;//0-没有标签 ；1-有标签

//行程助手-快车需要510。2019/08/22
@property (nonatomic, strong) NSString *ticketCheck;//检票口
@property (nonatomic, strong) NSString *coachNum;//车次号

@end

@interface getTicketInfos : NSObject
@property (nonatomic,strong) NSString *getTicketInfo;//取票信息（短信内容）
@property (nonatomic,strong) NSString *getTicketNo;//    取票号
@property (nonatomic,strong) NSString *getTicketPassWord;//取票密码
@property (nonatomic,strong) NSString *ticketCheck;//    检票口
@property (nonatomic,strong) NSString *stationOrderId;//车站订单号
@property (nonatomic,strong) NSString *seatNumber;//    座位号
@property (nonatomic,strong) NSArray *ticketImageThumbnail;//条形码/二维码
@property (nonatomic,strong) NSArray *ticketImageFull;//    条形码/二维码
@property (nonatomic,strong) NSString *ticketCodeType;//生成码类型    0一维码 1二维码（上海总站，240版本及以上）
@end

@interface priceInfo : NSObject
@property (nonatomic,strong) NSString *ticketPrice;//单票价
@property (nonatomic,strong) NSString *totalAmount;//    订单总额
@property (nonatomic,strong) NSString *reductAmount;//    立减金额
@property (nonatomic,strong) NSString *payAmount;//支付金额
@property (nonatomic,strong) NSString *discountAmount;//    红包金额
@property (nonatomic,strong) NSString *discountState;//    红包状态
//@property (nonatomic,strong) NSString *DiscountStateName;
@property (nonatomic,strong) NSString *insuranceAmount;//保险总额
@property (nonatomic,strong) NSString *count;//票数
@property (nonatomic,strong) NSString *childPrice;//儿童票价
@property (nonatomic,strong) NSString *childCount;//儿童票人数
@property (nonatomic,strong) NSString *insPrice;
@property (nonatomic,strong) NSString *insCount;//保险数量
@property (nonatomic,strong) NSString *packageAmount;//    套餐总额
@property (nonatomic,strong) NSString *packageCount;//    套餐份数
@property (nonatomic,strong) NSString *packagePrice;//    套餐单价
@property (nonatomic,strong) NSString *serviceFee;//巴管手续费
@property (nonatomic,strong) NSString * ticketFee;//    车站手续费
@property (nonatomic,strong) NSString *discountStateName;
@property (nonatomic,strong) NSString *serviceFeeCount;//    手续费份数
@property (nonatomic,strong) NSString *freeAmount;//一元免单活动的金额，0-不参数
@property (nonatomic,strong) NSString *ticketHomeFee;//送票上门费邮寄费
@property (nonatomic,strong) NSString *speedFee;//加速费
@property (nonatomic,strong) NSString *diffPrice;//预约购票的差价
@property (nonatomic,strong) NSMutableArray *cashCouponList;//代金券列表
@property (nonatomic,copy) NSString *freeFeeAmount;//免服务费总金额
@property (nonatomic,copy) NSString *freeFeePrice;//免服务费单张金额
@property (nonatomic,copy) NSString *freeFeeCount;//免服务费份数
@property (nonatomic,copy) NSString *vipCardReductAmount;//立减金额
@property (nonatomic,copy) NSString *speedFeeCount;//极速出票份数
@property (nonatomic, strong) policyDetail *policyDetail;//政策信息
@property (nonatomic, strong) NSString *vipCardPrice;//管家卡金额
@end

@interface tags : NSObject
@property (nonatomic,strong) NSArray *tagItems;//进度条中tag详情
@property (nonatomic,strong) NSString *showMsg;//    不显示进度条时的状态名称
@end

@interface tagItems : NSObject
@property (nonatomic,strong) NSString *name;//    tag名称
@property (nonatomic,strong) NSString *tagStyle;//    tag点的样式
@property (nonatomic,strong) NSString *lineStyle;//    tag后面线条的样式    （0：蓝色线；1：灰色线） 最后一步“出票失败”是1，需要显示灰色大圆点、灰色字体 0则正常显示
@property (nonatomic,strong) NSString *code;//状态码    S：订单已提交 P：待付款 T:出票中 O:出票成功 F:出票失败
@end

@interface shareItem : NSObject
@property (nonatomic, strong) NSString *isShowIcon; //是否显示分享Icon
@property (nonatomic, strong) NSString *shareImageUrl; //分享缩略图地址
@property (nonatomic, strong) NSString *shareDescription; //分享描述
@property (nonatomic, strong) NSString *shareUrl; //分享url地址
@property (nonatomic, strong) NSString *iconUrl; //分享icon_url地址
@end

@interface ticketCodeList : NSObject
@property (nonatomic,strong) NSString *getTicketNo;
@property (nonatomic,strong) NSString *getTicketPassWord;

@end

@interface eleInvoiceDetail : NSObject
@property (nonatomic,copy) NSString *remark;//说明文案
@property (nonatomic,copy) NSString *state;//0-不可申请电子发票；1-申请电子发票；2-可申请发票但时间不符；3-查看电子发票；
@property (nonatomic,copy) NSString *invoiceSerialId;//电子发票流水号[查看发票的时候使用]
@property (nonatomic,copy) NSString *canTimeType;//当发票状态 State=2时关注 开票时间类型 0：还未到开票时间 1：目前可开票 2：已过可开票时间
@end

@interface Responsegetbusorderdetail : NSObject
@property (nonatomic,strong) NSString *orderId;
@property (nonatomic,strong) NSString *orderSerialId;
@property (nonatomic,strong) NSString *shortSerialId;//shortSerialId
@property (nonatomic,strong) NSString *refOrderId;//第三方订单号
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *orderType;//订单类型    1汽车票 4校园巴士 5机场巴士
@property (nonatomic,strong) NSString *orderState;//票状态    0待付款 1出票中 2出票成功 3出票失败 4退款完成 113退款失败 5已取消 6支付成功 7锁票成功 8已取票 9占座中 10占座成功 11占座失败 12超时取消 108退款中 
@property (nonatomic,strong) NSString *orderStateName;//订单状态描述
@property (nonatomic,strong) NSString *createTime;//订单创建时间
@property (nonatomic,strong) NSString *insuranceId;//    保险id
@property (nonatomic,strong) NSString *isScrollCoach;//是否流水班    0：不是 1：是
@property (nonatomic,strong) NSArray *passengersInfo;//    乘客信息列表
@property (nonatomic,strong) NSString *freeChildCount;//    携童数
@property (nonatomic,strong) contactInfo *contactInfo;//    联系人信息
@property (nonatomic,strong) buttonDetail *buttonDetail;//    订单详情按钮信息
@property (nonatomic,strong) ticketInfo *ticketInfo;//    汽车票信息
@property (nonatomic,strong) getTicketInfos *getTicketInfos;//    取票信息
@property (nonatomic,strong) priceInfo *priceInfo;
@property (nonatomic,strong) tags *tags;//    进度条
@property (nonatomic,strong) shareItem *shareItem;//订单分享活动
@property (nonatomic,strong) NSString *payExpireDate;//    支付过期时间
@property (nonatomic,strong) NSString *serverTime;//服务器时间
@property (nonatomic,strong) NSArray *orderPayDetail;//支付信息
@property (nonatomic,strong) NSArray *getTicketKeyValue;
@property (nonatomic,strong) NSString *endRefundTicketTime; //退票截止时间
@property (nonatomic,strong) NSString *distance; //距离
@property (nonatomic,strong) NSString *startStation; //是否始发
@property (nonatomic,strong) NSString *endStation; //是否终点
@property (nonatomic,strong) NSString *refTicketState; //退票状态 2退票成功 3退票失败
@property (nonatomic,strong) NSString *refTicketStateName; //退票状态名称
@property (nonatomic,strong) mailDetail *mailDetail;//保险邮寄详细信息
@property (nonatomic,strong) NSString *isPassingStation;
@property (nonatomic,strong) NSString *progressMsg;//出票进度文案
@property (nonatomic,strong) NSString *isQuickTicket;//是否购买出票加速
@property (nonatomic,strong) NSMutableArray *ticketCodeList;//检票码列表
@property (nonatomic,strong) NSString *PaySuccessTime;//支付成功时间
@property (nonatomic,strong) NSString *platId;//站点类型
@property (nonatomic,strong) NSString *isTicketHome;//是否送票上门，1：需要送票上门；0：不需要
@property (nonatomic,strong) NSString *mailInvoiceFee;//发票邮寄费
@property (nonatomic,strong) NSString *isMailInvoice;//是否发票邮寄费
@property (nonatomic,strong) NSString *ticketCountDown;//出票倒计时
@property (nonatomic,strong) NSString *refundButtonType;//按钮类型：0-不展示任何按钮；1-退票按钮；2-置灰的退票按钮;3-处理中；4-查看退款进度；5-查看失败原因
@property (nonatomic, strong) NSString *refundType;//退票类型,0-不支持替票，1-整单退，2-单张退
@property (nonatomic, strong) NSString *ticketOutType;//出票类型，0-正常单；1-夜间单 2-预约购票；
@property (nonatomic, strong) NSString *altShiftTips;//备选车次订单的提示文案
@property (nonatomic, strong) NSString *refundRightLevel;//退票特权等级
@property (nonatomic, strong) NSString *memberLevel;//会员等级
@property (nonatomic, strong) NSString *changeState;//0-未改签，1-改签中，2-已改签
@property (nonatomic, strong) NSString *SupplierKey;//供应商key
@property (nonatomic, strong) NSString *bookingType;//0-先付款，1-先占座
@property (nonatomic, strong) NSString *preCancelNum;//可取消的次数
@property (nonatomic, strong) NSString *dptProvince;//出发省份
@property (nonatomic, strong) NSString *arrProvince;//到达省份
@property (nonatomic, strong) NSString *refundRightType;//0-没有特权；1-V4等级特权；2-管家卡特权
@property (nonatomic, strong) eleInvoiceDetail *eleInvoiceDetail;//电子发票信息
@property (nonatomic, copy) NSString *recommendVipCard;//0-不推荐1-推荐管家卡

@end
