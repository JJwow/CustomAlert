//
//  ResponseFlightDetail.h
//  CarBaDa
//
//  Created by zjb on 2019/4/26.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class flights;

@interface flightButtonDetail : NSObject
@property (nonatomic, strong) NSString *mailBtn;//报销按钮
@property (nonatomic, strong) NSString *cancelBtn;//取消按钮
@property (nonatomic, strong) NSString *payBtn;//支付按钮
@property (nonatomic, strong) NSString *endorseBtn;//改签按钮
@property (nonatomic, strong) NSString *refundBtn;//退单按钮
@property (nonatomic, strong) NSString *mailDetailBtn;//查看报销按钮
@property (nonatomic, strong) NSString *claimBtn;//理赔按钮

- (BOOL)shouldBShowBtnDetails;

@end

@interface ResponseFlightDetail : NSObject
@property (nonatomic, strong) NSString *serialId;//订单流水号
@property (nonatomic, strong) NSString *linkMan;//联系人
@property (nonatomic, strong) NSString *linkPhone;//联系人手机号
@property (nonatomic, strong) NSString *orderState;//订单状态
@property (nonatomic, strong) NSString *orderStateDesc;//订单状态描述
@property (nonatomic, strong) NSString *orderStateRemark;//订单状态备注
@property (nonatomic, strong) NSString *payExpireDate;//支付过期时间
@property (nonatomic, strong) NSString *officialState;//是否航司直连订单
@property (nonatomic, strong) NSString *orderAmount;//订单支付金额
@property (nonatomic, strong) NSString *insuranceAmount;//保险总额
@property (nonatomic, strong) NSString *payAmount;//无用
@property (nonatomic, strong) NSString *createTime;//订单创建时间
@property (nonatomic, strong) NSString *isUpdatePhone;//是否已修改联系号码(0:未修改可修改;1:已修改不可修改)

@property (nonatomic, strong) NSString *minDepDate;//最早起飞时间（2017-10-27 07:05)

@property (nonatomic, strong) NSMutableArray *flights;//航班列表
@property (nonatomic, strong) NSMutableArray *flightPriceDetail;//价格详情

@property (nonatomic, strong) NSMutableArray *flightPayDetail;//支付信息
@property (nonatomic, strong) NSMutableArray *flightInsuranceDetail;//保险列表
@property (nonatomic, strong) flightButtonDetail *flightButtonDetail;//按钮状态
@end

@interface flightPassengers : NSObject
@property (nonatomic, strong) NSString *unionSerialId;
@property (nonatomic, strong) NSString *eticketNo;//电子客票号
@property (nonatomic, strong) NSString *certificateType;//1 证件类型
@property (nonatomic, strong) NSString *certificateNo;//证件号码
@property (nonatomic, strong) NSString *passengerType;//乘客类型
@property (nonatomic, strong) NSString *passengerName;//乘客姓名
@property (nonatomic, strong) NSString *passengerState;//乘客状态
@property (nonatomic, strong) NSString *eticketState;//客票状态
@property (nonatomic, strong) NSString *passengerStateDesc;//乘客状态描述
@property (nonatomic, strong) NSString *ticketType;//票类型

@end

@interface flightPriceDetail : NSObject
@property (nonatomic, strong) NSString *priceType;//价格类型1 成人 2 儿童 3 婴儿 4 其他
@property (nonatomic, strong) NSString *priceName;//价格名称
@property (nonatomic, strong) NSString *amount;//金额
@property (nonatomic, strong) NSString *count;//数量
@property (nonatomic, strong) NSMutableArray *priceItems;//价格二级列表

- (flightPriceDetail *)initWithPriceType:(NSString*)priceType priceName:(NSString*)priceName amount:(NSString*)amount count:(NSString*)count priceItems:(NSArray *)priceItems;

@end

@interface priceItems : NSObject
@property (nonatomic, strong) NSString *priceName;//价格名称
@property (nonatomic, strong) NSString *priceNameType;//价格名称类型 1 机票 2 基建 3 燃油 4 航空意外险 5红包
@property (nonatomic, strong) NSString *unitPrice;//单价
@property (nonatomic, strong) NSString *unitCount;//数量

- (priceItems *)initWithpriceName:(NSString*)priceName unitPrice:(NSString*)unitPrice;

@end

@interface flightInsuranceDetail : NSObject

@property (nonatomic, strong) NSString *insType;//保险险种类型(0:交通意外险;1:航空意外险;2:延误险;3:组合险)
@property (nonatomic, strong) NSString *isClaim;//是否已理赔(0:未理赔;1:已理赔)
@property (nonatomic, strong) NSString *insCode;//保险code

@property (nonatomic, strong) NSString *insuranceName;//保险名称
@property (nonatomic, strong) NSString *amount;//单价
@property (nonatomic, strong) NSString *passengerName;//被保人
@property (nonatomic, strong) NSString *passengerId;//被保人Id
@property (nonatomic, strong) NSString *insuranceNo;//保单号
@property (nonatomic, strong) NSString *stateDesc;//状态描述
@property (nonatomic, strong) NSString *refundSupport;//0 不可退 1 可退
@property (nonatomic, strong) NSString *state;//状态id 0待处理 1 投保失败 2 已投保 3 已退保

@end

NS_ASSUME_NONNULL_END
