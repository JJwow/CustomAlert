//
//  Responsegetorderdetail.h
//  CarBaDa
//
//  Created by mini on 2018/7/13.
//  strongright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Responsebuttons,Responsecontact,ResponsedriverInfo,ResponserefundButtonDetail,orderPayDetail,shareInfo,payRefundList,publicityDTO;

@interface ResponseGetOrderDetail : NSObject
@property (nonatomic, strong) publicityDTO *publicityDTO;
//是否显示广告弹窗(新)    1: 是
@property (nonatomic, strong) NSString *dialogAD;
//计划降落时间
@property (nonatomic, strong) NSString *planArrTime;
//航班号
@property (nonatomic, strong) NSString *flightNo;
//费用说明文案
@property (nonatomic, strong) NSString *feeExplain;
//0 专车； 1 出租车
@property (nonatomic, strong) NSString *useType;
//滴滴计价规则url
@property (nonatomic, strong) NSString *priceRuleUrl;
//出发区域code
@property (nonatomic, strong) NSString *dptAdCode;
//到达区域code
@property (nonatomic, strong) NSString *arrAdCode;
//发票id
@property (nonatomic, strong) NSString *postSerialId;
//再次叫车判断1显示
@property (nonatomic, strong) NSString *againCallCar;
//免密的转菊花时间
@property (nonatomic, strong) NSString *freeCountdown;

//调用推荐接口时间 秒
@property (nonatomic, strong) NSString *recommendTime;
//支付退款记录
@property (nonatomic, strong) payRefundList *payRefund;
//车型品牌
@property (nonatomic, strong) NSMutableArray *carResourceList;
//推荐实名认证 0 否；1 是
@property (nonatomic, strong) NSString *ifRealName;
//车型图片
@property (nonatomic, strong) NSString *carTypeIcon;
//跨城提醒文案
@property (nonatomic, strong) NSString *crossCityRemind;
//价格模式0 预估价； 1 一口价
@property (nonatomic, strong) NSString *priceMode;
//支付状态0 待支付； 1 已支付  2 ：无责
@property (nonatomic, strong) NSString *payStatus;
//0预支付； 1后支付 2 部分支付
@property (nonatomic, strong) NSString *payMode;
//推荐免密支付 0否；1是
@property (nonatomic, strong) NSString *ifNoSecretPay;

//分享的短信内容
@property (nonatomic, strong) NSString *smsContent;
//是否显示报警 0 不显示；1显示
@property (nonatomic, strong) NSString *isWarning;
////是否展示广告图 0 不显示；1显示
//@property (nonatomic, strong) NSString *isAD;
//如果状态order_status=9 或order_status=10 则返回“您可以把车辆行程信息分享给家人朋友，放心出行”；
@property (nonatomic, strong) NSString *alertRemind;
//支付时间
@property (nonatomic, strong) NSString *payTime;
//品牌ID
@property (nonatomic, strong) NSString *merchantBrandId;
//供应商品牌
@property (nonatomic, strong) NSString *merchantBrand;
//实时单预计到达上车点时间
@property (nonatomic, strong) NSString *timelyEstimateTime;
//车型编码
@property (nonatomic, strong) NSString *ctCode;
//本人下单还是别人代下
@property (nonatomic, strong) NSString *isDai;

//汽车站、火车站
@property (nonatomic, strong) NSString *stationType;
//分享信息
@property (nonatomic, strong) shareInfo *shareInfo;
//支付失效时间
@property (nonatomic, strong) NSString *payExpireDate;
//预约失效时间
@property (nonatomic, strong) NSString *reservationExpireDate;
//业务入口7接站  8送站；     1, "接机, 2, "送机
@property (nonatomic, strong) NSString * useFor;
//出发类型 1 实时单  2 预约单
@property (nonatomic, strong) NSString * dptType;
//出发时间
@property (nonatomic, strong) NSString *departTime;
//出发城市ID
@property (nonatomic, strong) NSString *departCityId;
//出发城市
@property (nonatomic, strong) NSString *departCityName;
//出发地详细地址
@property (nonatomic, strong) NSString *departure;
//出发地经度
@property (nonatomic, strong) NSString * depLongitude;
//出发地纬度
@property (nonatomic, strong) NSString * depLatitude;
//到达城市id
@property (nonatomic, strong) NSString *arrCityId;
//到达城市名称
@property (nonatomic, strong) NSString *arrCityName;
//到达地详细地址
@property (nonatomic, strong) NSString *destination;
//到达地经度
@property (nonatomic, strong) NSString * destLongitude;
//到达地纬度
@property (nonatomic, strong) NSString * destLatitude;
//运价类型编码
@property (nonatomic, strong) NSString *priceCode;
//车型名称
@property (nonatomic, strong) NSString *cartypeName;
//车图片
@property (nonatomic, strong) NSString *brandUrl;
//车型id
@property (nonatomic, strong) NSString *cartypeId;
//行李数
@property (nonatomic, strong) NSString *luggageNum;
//座位数
@property (nonatomic, strong) NSString *seats;
//人数
@property (nonatomic, strong) NSString *brandName;
//创建时间
@property (nonatomic, strong) NSString *createTime;
//订单Id
@property (nonatomic, strong) NSString *orderId;
//订单流水
@property (nonatomic, strong) NSString *orderSerialId;
//订单状态
/**
 待支付：order_status=0
 已取消：order_status=6
 预约中：order_status=1
 已派车：order_status=9
 服务中：order_status=10
 服务完成：order_status=11
 已退款：order_status=3
 退款中：order_status =2
 */
@property (nonatomic, strong) NSString * orderState;
//状态描述
@property (nonatomic, strong) NSString *orderStateDesp;
//订单状态名称
@property (nonatomic, strong) NSString *orderStateName;
//项目类型
@property (nonatomic, strong) NSString *projectType;
//服务器时间
@property (nonatomic, strong) NSString *serverTime;
//用车时间
@property (nonatomic, strong) NSString *useDateTime;
//订单来源 0 巴管；1同程 2曹操 3 神州 4 首汽；5 同程（新）；6滴答
@property (nonatomic, strong) NSString *orderResource;
//应收金额(一口价) OrderResource=1时显示
@property (nonatomic, strong) NSString *price;
//实收金额（减红包金额）
@property (nonatomic, strong) NSString *factPrice;
//红包金额
@property (nonatomic, strong) NSString *discountAmount;
//司机操作状态 1 已接单；2已到达；3接到乘客；4送达乘客
@property (nonatomic, strong) NSString * driverStatus;
//下单人虚拟号
@property (nonatomic, strong) NSString *creatorVirtualNo;
//下单人号
@property (nonatomic, strong) NSString *creatorPhone;
//端判断24小时
@property (nonatomic, strong) NSString *arriveTime;

//订单金额明细
@property (nonatomic, strong) NSMutableArray *orderAmountDetails;
//支付明细
@property (nonatomic, strong) NSArray *orderPayDetail;
//按钮
@property (nonatomic, strong) Responsebuttons *buttons;
//联系人
@property (nonatomic, strong) Responsecontact *contact;
//司机信息
@property (nonatomic, strong) ResponsedriverInfo *driverInfo;
//退票按钮信息
@property (nonatomic, strong) ResponserefundButtonDetail *refundButtonDetail;
//小程序跳转地址
@property (nonatomic, strong) NSString *xcxUrl;
@end

@interface carResourceList : NSObject
//品牌名称
@property (nonatomic, strong) NSString *merchantBrand;
//车型名称
@property (nonatomic, strong) NSString *cartypeName;
//0派车中；1 附近无车；2 已派车；3无司机应答
@property (nonatomic, strong) NSString *dispatchStatus;
//0派车中；1 附近无车；2 已派车；3无司机应答
@property (nonatomic, strong) NSString *dispatchStatusName;
//品牌图片
@property (nonatomic, strong) NSString *brandImg;
//0 首次下单；1 推荐资源
@property (nonatomic, strong) NSString *resourceType;
//0 专车； 1 出租车
@property (nonatomic, strong) NSString *useType;
@end



@interface orderAmountDetails : NSObject
//价格
@property (nonatomic, strong) NSString *price;
//价格类型
@property (nonatomic, strong) NSString *priceType;
@end

@interface Responsebuttons : NSObject
//是否显示取消 1 显示，0不显示 order_status=0、1、7
@property (nonatomic, strong) NSString *ifCanCancel;
//评价本次服务 0 不可以，1 可以 pay_status=11
@property (nonatomic, strong) NSString *ifCanEvaluate;
//是否可查看评价 0 不可以，1 可以 evaluation_status=1
@property (nonatomic, strong) NSString *ifCanViewEvaluate;
//是否显示支付 1 显示，0不显示 order_status=0
@property (nonatomic, strong) NSString *ifCanPay;
//重新预定 0 不显示，1 显示 order_status =5
@property (nonatomic, strong) NSString *ifContinueBook;
//是否能开票 0 不显示，1 申请发票  2已申请发票
@property (nonatomic, strong) NSString *ifCanVoice;
//行程分享 0 不显示，1 显示 order_status=7 或order_status=10
@property (nonatomic, strong) NSString *isTripShare;
//是否显示取消规则
@property (nonatomic, strong) NSString *ifCanCancelRule;
//是否显示费用申诉
@property (nonatomic, strong) NSString *ifCanFeeAppeal;
//是否显示重新叫车
@property (nonatomic, strong) NSString *ifCanjiaoche;
@end

@interface orderPayDetail : NSObject
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *value;
@end

@interface Responsecontact : NSObject
//联系人电话
@property (nonatomic, strong) NSString *mobileNo;
//联系人姓名
@property (nonatomic, strong) NSString *name;
@end

@interface ResponsedriverInfo : NSObject
//车品牌
@property (nonatomic, strong) NSString *carBrand;
//车颜色
@property (nonatomic, strong) NSString *carColor;
//车牌号
@property (nonatomic, strong) NSString *carLicence;
//司机ID
@property (nonatomic, strong) NSString *driverId;
//司机电话
@property (nonatomic, strong) NSString *driverMobileNo;
//司机姓名
@property (nonatomic, strong) NSString *driverName;
//司机性别 0 女，1 男
@property (nonatomic, strong) NSString *gender;
@end

@interface ResponserefundButtonDetail : NSObject
//查看退款进度/查看失败原因
@property (nonatomic, strong) NSString *msgButtonName;
//查看按钮类型，0-不展示按钮，1-点击查看退款进度，2-弹框展示退款失败原因
@property (nonatomic, strong) NSString *msgButtonType;
//退单失败原因
@property (nonatomic, strong) NSString *refundFailMsg;
@end

@interface shareInfo : NSObject
//1显示,0不显示
@property (nonatomic, strong) NSString *isShowIcon;
//分享Icon Url地址
@property (nonatomic, strong) NSString *iconUrl;
//分享描述
@property (nonatomic, strong) NSString *shareDescription;
//分享缩略图地址
@property (nonatomic, strong) NSString *shareImageUrl;
//分享url地址
@property (nonatomic, strong) NSString *shareUrl;

@property (nonatomic, copy) NSString *redBatchs;//红包批次号

@end

@interface payRefundList : NSObject
//已支付
@property (nonatomic, strong) NSString *paidAmount;
//待支付
@property (nonatomic, strong) NSString *waitPayAmount;
//退款
@property (nonatomic, strong) NSString *refundAmount;
@end

@interface publicityDTO : NSObject
//1: 极速派车, 2: 爽约必赔
@property (nonatomic, strong) NSString *type;
//宣传文案内容(新)
@property (nonatomic, strong) NSString *content;
@end
