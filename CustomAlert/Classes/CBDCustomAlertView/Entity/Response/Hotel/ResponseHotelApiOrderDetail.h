//
//  ResponseHotelApiOrderDetail.h
//  CarBaDa
//
//  Created by 丁健 on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetbusorderdetail.h"

@interface resourceUseDateDetail : NSObject
@property (nonatomic, copy) NSString *checkPrice;//价格明细
@property (nonatomic, copy) NSString *useDate;//日期
@end

@interface travlePassengerInfo : NSObject
@property (nonatomic, copy) NSString *name;//姓名
@end

@interface cancelReason : NSObject
@property (nonatomic, copy) NSString *canKey;//取消原因值
@property (nonatomic, copy) NSString *canVal;//取消原因内容
@property (nonatomic, copy) NSString *canProject;
@end

@class invoiceDetail;
@interface ResponseHotelApiOrderDetail : NSObject

@property (nonatomic, copy) NSString *orderId;//订单ID
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@property (nonatomic, copy) NSString *resourceName;//酒店名称
@property (nonatomic, copy) NSString *resourceId;//酒店ID
@property (nonatomic, copy) NSString *productId;//房型id
@property (nonatomic, copy) NSString *productUniqueId;//政策ID
@property (nonatomic, copy) NSString *lon;//经度 百度
@property (nonatomic, copy) NSString *lat;//纬度 百度
@property (nonatomic, copy) NSString *address;//酒店地址
@property (nonatomic, copy) NSString *phone;//酒店电话
@property (nonatomic, copy) NSString *checkInDate;//入住时间
@property (nonatomic, copy) NSString *checkOutDate;//离店时间
@property (nonatomic, copy) NSString *bookCount;//房间数
@property (nonatomic, copy) NSString *arrivalTime;//最晚到店时间
@property (nonatomic, copy) NSString *attentiondes;//注意
@property (nonatomic, copy) NSString *createDate;//下单时间
@property (nonatomic, copy) NSString *orderState;//订单状态
@property (nonatomic, copy) NSString *orderStateName;//订单状态说明
@property (nonatomic, copy) NSString *showState;//展示状态
@property (nonatomic, copy) NSString *resourceProductName;//房型名称
@property (nonatomic, copy) NSString *breakfastName;//早餐名称
@property (nonatomic, copy) NSString *paymentType;//支付模式    1、现付，2、预付
@property (nonatomic, copy) NSString *amount;//订单总额
@property (nonatomic, copy) NSString *couponAmount;//红包金额
@property (nonatomic, copy) NSString *linkManName;//联系人姓名
@property (nonatomic, copy) NSString *linkManMobile;//联系人手机号
@property (nonatomic, copy) NSArray *resourceUseDateDetail;//房间使用明细
@property (nonatomic, strong) NSArray *travlePassengerInfo;//入住人信息
@property (nonatomic, copy) NSString *ifCanCancel;//取消按钮
@property (nonatomic, copy) NSString *ifCanPay;//支付按钮
@property (nonatomic, copy) NSString *isCanDelete;//删除按钮
@property (nonatomic, copy) NSString *ifCanContinue;//继续预订
@property (nonatomic, copy) NSString *ifCanApplyRefund;//申请退单按钮
@property (nonatomic,strong) refedTicketDetail *refedTicketDetail;//查看退款进度按钮相关
@property (nonatomic, copy) NSString *cancelDesp;//取消规则文案
@property (nonatomic, copy) NSString *serverTime;//接口待添加
@property (nonatomic, copy) NSString *payExpireDate;//接口待添加
@property (nonatomic, strong) NSArray *orderPayDetail;//
@property (nonatomic, copy) NSString *hotelAmount;//酒店总金额    不含优惠金额
@property (nonatomic, copy) NSString *couponCostAmount;//代金券抵用金额
@property (nonatomic, copy) NSString *billingStatus;//开票状态 0、不可开票，1、可以开票，2、已经申请开票
@property (nonatomic, copy) NSString *invoiceTitle;//发票抬头
@property (nonatomic, copy) NSString *mailName;//收票人
@property (nonatomic, copy) NSString *mailPhone;//收票人手机
@property (nonatomic, copy) NSString *mailAddress;//邮寄地址
@property (nonatomic, copy) NSString *customerIdentification;//纳税人识别号
@property (nonatomic, copy) NSString *hasSpecialInvoice;//是否开专用发票1开2不开
@property (nonatomic, copy) NSString *provinceId;
@property (nonatomic, copy) NSString *cityId;
@property (nonatomic, copy) NSString *cityName;//城市
@property (nonatomic, copy) NSString *provinceName;
@property (nonatomic, copy) NSString *sectionId;
@property (nonatomic, copy) NSString *customerCancelReasonId;
@property (nonatomic, copy) NSString *refid;
@property (nonatomic, strong) NSArray *cancelReason;
@property (nonatomic, copy) NSString *cancelType;//取消规则类型
@property (nonatomic, copy) NSString *checkOutRedpage;//离店后描述
@property (nonatomic, strong) invoiceDetail *invoiceDetail;
@property (nonatomic, copy) NSArray *promptBarList;

@property (nonatomic, copy) NSString *couponReduceAmount; /// 组合券优惠金额 v420
@property (nonatomic, copy) NSString *packShowAmount;// 组合券打包价格（实际售价+优惠金额）v420

@property (nonatomic, copy) NSString *activityUrl;//活动专题页面
//@property (nonatomic, copy) NSString *billingType;//开票类型    0.不开票 1.同程开票 2.酒店开票

@property (nonatomic, copy) NSString *isSuccess;//是否成功

@end


