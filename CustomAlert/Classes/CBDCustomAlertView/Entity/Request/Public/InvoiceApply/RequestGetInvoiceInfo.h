//
//  RequestGetInvoiceInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetInvoiceInfo : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;//项目id
@property (nonatomic, copy) NSString *orderSerialIds;//订单流水号，多个以逗号隔开
@property (nonatomic, copy) NSString *memberId;

@end

NS_ASSUME_NONNULL_END
