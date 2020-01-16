//
//  RequestGetOrderClaimAccount.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/26.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetOrderClaimAccount : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *projectSerialid;//项目订单流水号

@end

NS_ASSUME_NONNULL_END
