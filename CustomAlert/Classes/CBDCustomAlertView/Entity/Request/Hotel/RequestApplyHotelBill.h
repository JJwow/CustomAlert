//
//  RequestApplyHotelBill.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/31.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestApplyHotelBill : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员Id
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@property (nonatomic, copy) NSString *invoiceTitle;//发票抬头
@property (nonatomic, copy) NSString *mailAddress;//邮寄地址
@property (nonatomic, copy) NSString *mailName;//发票收件人
@property (nonatomic, copy) NSString *mailPhone;//发票收件人手机号
@property (nonatomic, copy) NSString *mailProvince;//发票邮寄省
@property (nonatomic, copy) NSString *mailCity;//发票邮寄市
@property (nonatomic, copy) NSString *mailDistrict;//发票邮寄市
@property (nonatomic, copy) NSString *invoiceTitleId;//发票id

@property (nonatomic, copy) NSString *invoiceEmail;
@property (nonatomic, copy) NSString *invoiceType;
@property (nonatomic, copy) NSString *isRemarkInfo;
@property (nonatomic, copy) NSString *payMethod;
@end
