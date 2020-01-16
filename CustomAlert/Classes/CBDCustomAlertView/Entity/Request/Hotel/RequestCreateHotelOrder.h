//
//  RequestCreateHotelOrder.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseLoadOrderWrite.h"
@class invoiceDetail;

@interface useDetails : priceDetailList

@end

@interface guests : NSObject
@property (nonatomic, copy) NSString *name;//姓名
@property (nonatomic, copy) NSString *mobile;//手机号
@property (nonatomic, copy) NSString *nationality;//国籍
@property (nonatomic, copy) NSString *IdCardNo;//身份证号

@end

@interface RequestCreateHotelOrder : TCTRequestObject

@property (nonatomic, copy) NSString *resourceId;//酒店 Id
@property (nonatomic, copy) NSString *hotelName;//酒店名称[新]
@property (nonatomic, copy) NSString *productId;//房型 Id
@property (nonatomic, copy) NSString *roomName;//房型名称[新]
@property (nonatomic, copy) NSString *productUniqueId;//策略 Id
@property (nonatomic, copy) NSString *paymentType;//付款方式（1：SelfPay-现付； 2：Prepay-预付）
@property (nonatomic, copy) NSString *bookCount;//预订房间数量

@property (nonatomic, copy) NSArray *guests;//旅客姓名集合

@property (nonatomic, copy) NSString *linkMobile;//联系人电话
@property (nonatomic, copy) NSString *memberId;//会员Id

@property (nonatomic, copy) NSString *couponAmount;//红包金额
@property (nonatomic, copy) NSString *couponCode;//红包code
@property (nonatomic, copy) NSString *cashCouponAmount;//代金券抵扣金额
@property (nonatomic, copy) NSString *cashCouponCode;//代金券code


@property (nonatomic, copy) NSString *startDate;//入住日期[新]
@property (nonatomic, copy) NSString *endDate;//离店日期[新]
@property (nonatomic, copy) NSString *orderAmount;//订单金额（不包含优惠金额）[新]
@property (nonatomic, copy) NSString *arrivalTime;//最晚到店时间(只能是整点，默认 18 点，超过 24表示次日，如 25 为次日 1点)
@property (nonatomic, copy) NSString *orderRemark;//特殊偏好
@property (nonatomic, copy) NSString *marketingId;//营销ID
@property (nonatomic, copy) NSString *roomTypeId;//销售房型编号(创单需要，其他无关)

@property (nonatomic, copy) NSString *billingType;//开票类型 0.不开票 1.同程开票 2.酒店开票
@property (nonatomic, strong) invoiceDetail *invoiceDetail;//发票信息（开票类型=1）[新]
@property (nonatomic, copy) NSArray *useDetails;//价格明细

@property (nonatomic, copy) NSString *packBatchCode;//组合券批次号[新]v420
@property (nonatomic, copy) NSString *couponPackAmount;//购买的组合券金额[新]v420
@property (nonatomic, copy) NSString *couponReduceAmount;//组合券立减金额[新]v420

@end
