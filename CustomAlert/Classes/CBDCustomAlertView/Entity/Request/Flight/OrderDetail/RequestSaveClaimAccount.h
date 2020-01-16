//
//  RequestSaveClaimAccount.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/27.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSaveClaimAccount : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *projectSerialid;//项目订单流水号

@property (nonatomic, strong) NSString *claimAccount;//理赔收款账号(目前只支持支付宝账户)
@property (nonatomic, strong) NSString *accountOwner;//收款账号归属人

@end

NS_ASSUME_NONNULL_END
