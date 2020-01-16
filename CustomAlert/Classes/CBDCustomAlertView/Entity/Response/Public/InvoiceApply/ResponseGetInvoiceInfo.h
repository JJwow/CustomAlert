//
//  ResponseGetInvoiceInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetInvoiceInfo : NSObject
@property (nonatomic, strong) NSString *invoiceAmount;//可申请开票的金额
@property (nonatomic, strong) NSString *contents;//发票内容
@property (nonatomic, strong) NSString *remark;//金额备注
//500新增
@property (nonatomic, strong) NSString *showMore;//是否显示更多信息（0、否，1、是）
@property (nonatomic, strong) NSString *invoiceType;//发票类型（1：电子增值税普票，2：纸质增值税普票，4：纸质增值税专票）
@property (nonatomic, strong) NSString *postRemark;//邮寄信息描述
@end

NS_ASSUME_NONNULL_END
