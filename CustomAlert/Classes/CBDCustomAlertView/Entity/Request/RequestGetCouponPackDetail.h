//
//  RequestGetCouponPackDetail.h
//  CarBaDa
//
//  Created by zhaitong on 2019/1/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetCouponPackDetail : TCTRequestObject
@property (nonatomic, copy) NSString *packBatchCode;//组合券批次号
@end

NS_ASSUME_NONNULL_END
