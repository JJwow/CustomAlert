//
//  ResponseGetInvoiceProgress.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface invoicePDFs : NSObject
@property (nonatomic, strong) NSString *content;//发票类目名称
@property (nonatomic, strong) NSString *url;//pdf地址
@end

@interface ResponseGetInvoiceProgress : NSObject
@property (nonatomic, strong) NSString *invoiceAmount;//开票的金额
@property (nonatomic, strong) NSString *contents;//发票内容
@property (nonatomic, strong) NSString *invoiceTitleType;//抬头类型
@property (nonatomic, strong) NSString *invoiceTitle;//发票抬头
@property (nonatomic, strong) NSString *customerIdentification;//纳税人识别号
@property (nonatomic, strong) NSString *email;//邮箱地址
@property (nonatomic, strong) NSString *state;//1-已申请，2-已发送
@property (nonatomic, strong) NSString *remark;//金额备注
@property (nonatomic, strong) NSString *notice;//发票平台维护公告
//500新增
@property (nonatomic, strong) NSString *invoiceType;//发票类型0、公共发票页没有发票类型 1、普通发票 2、增值税专用发票 详见CommonInvoiceType枚举
@property (nonatomic, strong) NSString *postAddress;//邮寄地址
@property (nonatomic, strong) NSString *linkman;//联系人姓名
@property (nonatomic, strong) NSString *phone;//联系人手机号
@property (nonatomic, strong) NSString *mailMerchant;//邮寄供应商
@property (nonatomic, strong) NSString *mailNo;//邮寄单号
@property (nonatomic, strong) NSString *postRemark;//邮寄费
@property (nonatomic, strong) NSMutableArray *invoicePDFs;
@end

NS_ASSUME_NONNULL_END
