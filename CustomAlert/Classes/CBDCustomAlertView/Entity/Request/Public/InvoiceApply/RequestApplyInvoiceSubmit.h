//
//  RequestApplyInvoiceSubmit.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestApplyInvoiceSubmit : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;//项目id
@property (nonatomic, copy) NSString *orderSerialIds;//订单流水号，多个以逗号隔开
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *invoiceAmount;//开票的金额
@property (nonatomic, copy) NSString *invoiceId;//发票id
@property (nonatomic, copy) NSString *email;//邮箱地址
//500新增
@property (nonatomic, copy) NSString *invoiceMore;//是否需要发票更多信息（0否1是）
@property (nonatomic, copy) NSString *invoiceType;//发票类型（1：电子增值税普票，2：纸质增值税普票，4：纸质增值税专票）
@property (nonatomic, copy) NSString *mailId;//邮寄地址id
@end

NS_ASSUME_NONNULL_END
