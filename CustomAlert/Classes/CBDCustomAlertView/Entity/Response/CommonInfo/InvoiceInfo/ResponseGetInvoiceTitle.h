//
//  ResponseGetInvoiceTitle.h
//  CarBaDa
//
//  Created by Vic_Li on 16/9/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetorderlist.h"

@interface invoiceList : NSObject
@property (nonatomic, copy) NSString *invoiceId;//发票ID
@property (nonatomic, copy) NSString *invoiceTitle;//发票抬头
@property (nonatomic, copy) NSString *invoiceTitleType;//发票抬头类型 -- 1、公司，2、个人 3、事业单位
@property (nonatomic, copy) NSString *invoiceCategory;//发票类型 -- 1、普通发票，2、增值税专用发票
@property (nonatomic, copy) NSString *customerIdentification;//纳税人识别号
@property (nonatomic, copy) NSString *companyAddress;//公司地址
@property (nonatomic, copy) NSString *companyPhone;//公司电话
@property (nonatomic, copy) NSString *customerBankName;//开户银行名称
@property (nonatomic, copy) NSString *customerBankAccount;//开户银行账号

//500新增
@property (nonatomic, copy) NSString *month;//发票月份
@property (nonatomic, copy) NSMutableArray *orderList;//发票中包含每张订单的基本信息数组
@property (nonatomic, copy) NSString *invoiceMore;//在普票的情况下是否需要更多发票信息（0否1是），用户在编辑发票抬头里选择后本地保存

//531新增 开票
@property (nonatomic, strong) NSString *title;//标题
@property (nonatomic, strong) NSString *remark;//说明
@property (nonatomic, strong) NSString *price;//金额

-(instancetype)initWithCustonID:(NSString *)sInsvoiceId  invoiceTitle:(NSString *)sInvoiceTitle;
@end

@interface ResponseGetInvoiceTitle : NSObject
@property (nonatomic, strong) NSArray *invoiceList;
@property (nonatomic, copy) NSString *isSuccess;
@end
