//
//  RequestApplyFlightReceipt.h
//  CarBaDa
//
//  Created by zjb on 2019/4/29.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestApplyFlightReceipt : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@property (nonatomic, copy) NSString *province;//省
@property (nonatomic, copy) NSString *city;//市
@property (nonatomic, copy) NSString *area;//区
@property (nonatomic, copy) NSString *address;//详细地址
@property (nonatomic, copy) NSString *linkman;//联系人
@property (nonatomic, copy) NSString *phone;//手机号
@end

NS_ASSUME_NONNULL_END
