//
//  ResponseGetRefundAmountDetail.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Requestcreatebusorder.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetRefundAmountDetail : NSObject

@property (nonatomic, copy) NSString *refundTipsType;//1-普通无预估手续费，2-有预估手续费，3-全额退票

@property (nonatomic, copy) NSString *refundAmount;//退款总金额

@property (nonatomic, strong) NSArray *refundDetail;//明细

@end

NS_ASSUME_NONNULL_END
