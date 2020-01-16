//
//  ResponseGetEstimatedrefundamount.h
//  CarBaDa
//
//  Created by 王俊杰 on 2018/12/29.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetEstimatedrefundamount : NSObject

@property (nonatomic, strong)NSString *refundamount;//退票手续费预估金额

@property (nonatomic, strong)NSString *refundTipsType;//退票提示类型，1-普通无预估手续费，2-有预估手续费，3-全额退票,4-【不支持退票】

@property (nonatomic, strong)NSString *remark;//不可退票的原因描述
@end

NS_ASSUME_NONNULL_END
