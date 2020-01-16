//
//  RequestChangeInvoiceTitle.h
//  CarBaDa
//
//  Created by Vic_Li on 16/9/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestChangeInvoiceTitle : TCTRequestObject
@property (nonatomic, copy) NSString *changeType;//更改类型: 1：新增 2：修改 3：删除
@property (nonatomic, copy) NSString *invoiceId;//发票抬头Id
@property (nonatomic, copy) NSString *invoiceTitle;//	发票抬头内容
@property (nonatomic, copy) NSString *memberId;//会员Id
@property (nonatomic, copy) NSString *invoiceTitleType;//发票抬头类型 -- 1、公司，2、个人
@property (nonatomic, copy) NSString *invoiceCategory;//发票类型 -- 1、普通发票，2、增值税专用发票
@property (nonatomic, copy) NSString *customerIdentification;//纳税人识别号
@property (nonatomic, copy) NSString *companyAddress;//公司地址
@property (nonatomic, copy) NSString *companyPhone;//公司电话
@property (nonatomic, copy) NSString *customerBankName;//开户银行名称
@property (nonatomic, copy) NSString *customerBankAccount;//开户银行账号

@end
