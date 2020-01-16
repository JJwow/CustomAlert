//
//  RequestApplyMergEmail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/11/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestApplyMergEmail : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *orderSerialId;//订单流水号
@property (nonatomic, strong) NSString *mergeMailSerialid;//合并邮寄流水号

@end

NS_ASSUME_NONNULL_END
