//
//  RequestGetInvoiceProgress.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetInvoiceProgress : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;//项目id
@property (nonatomic, copy) NSString *invoiceSerialId;//电子发票流水号
@property (nonatomic, copy) NSString *memberId;//会员id
@end

NS_ASSUME_NONNULL_END
