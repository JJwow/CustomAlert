//
//  ResponseGetOrderClaimAccount.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/26.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetOrderClaimAccount : TCTResponseObject

@property (nonatomic, strong) NSString *claimAccount;//理赔收款账号(目前只支持支付宝账户)
@property (nonatomic, strong) NSString *accountOwner;//收款账号归属人

@end

NS_ASSUME_NONNULL_END
