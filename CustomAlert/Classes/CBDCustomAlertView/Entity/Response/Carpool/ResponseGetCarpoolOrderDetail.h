//
//  ResponseGetCarpoolOrderDetail.h
//  CarBaDa
//
//  Created by John on 2018/11/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Responsegetorderdetail.h"

@interface buttons : NSObject

@property (nonatomic, copy) NSString *isCanAddEvaluate;//追加评论按钮 0 不可以，1 可以

@property (nonatomic, copy) NSString *ifCanCancel;//是否显示取消 1 显示，0不显示

@property (nonatomic, copy) NSString *isCanEvaluate;//是否可评价 0 不可以，1 可以， 2评价过期

@property (nonatomic, copy) NSString *ifCanPay;//是否显示支付 1 显示，0不显示

@property (nonatomic, copy) NSString *ifCanViewCar;//是否可查看车辆位置 0 不可以，1 可以

@property (nonatomic, copy) NSString *isCanViewEvaluate;//是否可查看评价 0 不可以，1 可以

@property (nonatomic, copy) NSString *ifContinueBook;//继续预定按钮 0 不显示，1 显示（走完正常流程）

@property (nonatomic, copy) NSString *isCanOrderAgain;//再来一单（取消等操作后）

@property (nonatomic, copy) NSString *isShowTel;//司机电话按钮是否显示 0显示 1不显示

@end

@interface contact : NSObject

@property (nonatomic, copy) NSString *mobileNo;//联系人电话

@property (nonatomic, copy) NSString *name;//联系人姓名

@end

@interface driverInfo : NSObject

@property (nonatomic, copy) NSString *carBrand;//车品牌

@property (nonatomic, copy) NSString *carColor;//车颜色

@property (nonatomic, copy) NSString *carLicence;//车牌号

@property (nonatomic, copy) NSString *driverId;//司机ID

@property (nonatomic, copy) NSString *driverMobileNo;//司机电话

@property (nonatomic, copy) NSString *driverName;//司机姓名

@property (nonatomic, copy) NSString *gender;//司机性别 0 女，1 男

@end

@interface pointMarkList : NSObject

@property (nonatomic, copy) NSString *title;//标题

@property (nonatomic, copy) NSString *url;//url地址

@end

@interface refundButtonDetail : NSObject

@property (nonatomic, copy) NSString *msgButtonName;//查看退款进度/查看失败原因

@property (nonatomic, copy) NSString *msgButtonType;//url地址 查看按钮类型，0-不展示按钮，1-点击查看退款进度，2-弹框展示退款失败原因

@property (nonatomic, copy) NSString *refundButtonName;//按钮文案

@property (nonatomic, copy) NSString *refundButtonType;//按钮类型，0-不展示按钮，1-可点击按钮，2-置灰不可点击按钮

@property (nonatomic, copy) NSString *refundFailMsg;//退单失败原因

@end

@interface ResponseGetCarpoolOrderDetail : NSObject

@property (nonatomic,copy) NSString *amount;//订单总额

@property (nonatomic,copy) NSString *arrCity;//到达城市

@property (nonatomic,copy) NSString *arriveDetail;//到达详细地址

@property (nonatomic,copy) NSString *autoDelayMsg;//派车延期提醒文案

@property (nonatomic,copy) NSString *createTime;//创建时间

@property (nonatomic,copy) NSString *departDetail;//出发详细地址

@property (nonatomic,copy) NSString *depatureTime;//实际发车时间

@property (nonatomic,copy) NSString *dptCity;//出发城市

@property (nonatomic,copy) NSString *endPointLat;//下车点经度

@property (nonatomic,copy) NSString *endPointLng;//下车点纬度

@property (nonatomic,copy) NSString *orderId;//订单Id

@property (nonatomic,copy) NSString *orderSerialId;//订单流水

@property (nonatomic,copy) NSString *orderState;//订单状态  0待付款 1派车中 2退款中 3退款成功 4退款失败 5已取消 6超时取消 7已派车 8支付中 10服务中 11服务完成 14已确认接单 15等待接单

@property (nonatomic,copy) NSString *orderStateDesp;//状态描述

@property (nonatomic,copy) NSString *orderStateName;//订单状态名称

@property (nonatomic,copy) NSString *passRegion;//0 未超范围；1 上车点超；2 下车点超；3 上下车点超；

@property (nonatomic,copy) NSString *payExpireDate;//支付失效时间

@property (nonatomic,copy) NSString *productType;//产品类型 1拼车，0包车

@property (nonatomic,copy) NSString *projectType;//项目类型

@property (nonatomic,copy) NSString *serverTime;//服务器时间

@property (nonatomic,copy) NSString *serviceType;//拼车服务类型 0 普通拼车，1 接机拼车，2 送机拼车

@property (nonatomic,copy) NSString *startPointLat;//上车点经度

@property (nonatomic,copy) NSString *startPointLng;//上车点纬度

@property (nonatomic,copy) NSString *useDateTime;//用车时间 XX月XX日 18:00

@property (nonatomic,copy) NSString *useDate;//用车时间 XXXX年XX月XX日 18:00

@property (nonatomic,strong) buttons *buttons;//按钮

@property (nonatomic,strong) contact *contact;//联系人

@property (nonatomic,strong) driverInfo *driverInfo;//司机信息

@property (nonatomic,strong) NSMutableArray *orderAmountDetails;//订单金额明细

@property (nonatomic,strong) NSMutableArray *orderPayDetail;//支付明细

@property (nonatomic,strong) NSArray *pointMarkList;//上车点描述列表

@property (nonatomic,strong) refundButtonDetail *refundButtonDetail;//退票按钮信息

@property (nonatomic,strong) shareInfo *shareInfo;//分享信息

@property (nonatomic,copy) NSString *ifReceiveUser;//是否接到乘客 0 未接到；1 接到

@property (nonatomic,copy) NSString *carPoolType;//拼单类型 0：普通拼； 1：2人拼； 2：3人拼； 3升舱2人拼； 4 升舱为3人拼

@property (nonatomic,copy) NSString *timelyCountdownTime;//及时单倒计时时间 单位秒，如180（若果本字段为空，则该订单为人工派单）

@property (nonatomic,copy) NSString *isRecommendTrip;//是否显示推荐拼友 0 否；1 是

@property (nonatomic,copy) NSString *ifWaitTime;//是否显示预约单等待时间    0 否；1 是 

@property (nonatomic,copy) NSString *paySuccessTime;//支付成功时间 预约单、及时单 倒计时用

@property (nonatomic,copy) NSString *appointmentType;//预约类型 1 实时单；2预约单

@property (nonatomic,copy) NSString *upgradePrompt;//升舱提示文案

@property (nonatomic,copy) NSString *starDriverLabel;//星级司机标签 0 不显示； 1 显示；

@property (nonatomic,copy) NSString *driverStatus;//司机操作状态 1 出发去接乘客；2等待乘客上车；3接到乘客；4送达乘客

@property (nonatomic,copy) NSString *arrDptTime;//到达用车地点时间

@property (nonatomic,copy) NSString *waitLimitTime;//等待限制时间 分钟

@property (nonatomic,copy) NSString *arriveTime;//时间

@property (nonatomic,copy) NSString *peoples;//乘车人数

@property (nonatomic,copy) NSString *baggageNum;//包车行李数

@property (nonatomic,copy) NSString *remark;//拼车备注

@property (nonatomic,copy) NSString *payStatus;//支付状态 0:未支付，1:支付成功 2无需支付

@property (nonatomic,copy) NSString *payMode;//0 预支付； 1 后支付

@property (nonatomic,copy) NSString *windowType;//0 不弹； 1 免密弹窗； 2 派车提醒弹窗;

@property (nonatomic,copy) NSString *payType;//支付方式(0:未知，1:支付宝，2:微信，3:连连支付，4:苹果支付 ,5 同程金服快捷支付)

@property (nonatomic,copy) NSString *sendDate;//派车时间

@property (nonatomic,copy) NSString *discountAmount;//优惠金额

@property (nonatomic,copy) NSString *invoiceStatus;//发票状态 0不显示发票 1申请发票 2已申请发票

@property (nonatomic,copy) NSString *mailSerialId;//发票号

@property (nonatomic,copy) NSString *dptRangePrice;//上车点超范围金额

@property (nonatomic,copy) NSString *arrRangePrice;//下车点超范围金额

@property (nonatomic,copy) NSString *printInvoice;//是否打印发票    0：未打印，1：已打印

@property (nonatomic,copy) NSString *recommendCarHailing;//是否推荐网约车 0 否  1 是

@property (nonatomic,copy) NSString *inventoryState;//0非库存单 1非候补单 2候补中 3候补成功

@end

