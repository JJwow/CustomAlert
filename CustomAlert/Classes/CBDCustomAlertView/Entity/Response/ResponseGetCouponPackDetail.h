//
//  ResponseGetCouponPackDetail.h
//  CarBaDa
//
//  Created by zhaitong on 2019/1/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetCouponPackDetail : NSObject
@property (nonatomic, copy) NSString *packBatchCode;//组合券批次号
@property (nonatomic, copy) NSString *packName;//组合券名称
@property (nonatomic, copy) NSString *packSellAmount;//组合券外显售价
@property (nonatomic, copy) NSString *packTag;//组合券标签
@property (nonatomic, copy) NSString *realCost;//组合券应付金额（实际售价）
@property (nonatomic, copy) NSString *reduceAmount;//优惠金额
@property (nonatomic, copy) NSString *showAmount;//组合券外显价值
@property (nonatomic, copy) NSString *useRule;
@end

NS_ASSUME_NONNULL_END
