//
//  RequestRecommendUseTime.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestRecommendUseTime : TCTRequestObject

@property (nonatomic, copy) NSString *orderSerialId;//订单流水号

@end

NS_ASSUME_NONNULL_END
