//
//  ResponseGetRefundRule.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface refundChargesList : NSObject

@property (nonatomic, copy) NSString *refundTimeDesp;//退票时间说明

@property (nonatomic, copy) NSString *refundRuleDesp;//手续费说明

@end

@interface ResponseGetRefundRule : NSObject

@property (nonatomic, strong) NSArray *refundChargesList;//费用说明列表

@end

NS_ASSUME_NONNULL_END
