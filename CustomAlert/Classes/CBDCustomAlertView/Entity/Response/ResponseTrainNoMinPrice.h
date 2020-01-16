//
//  ResponseTrainNoMinPrice.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/10/24.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseTrainNoMinPrice : NSObject
@property (nonatomic, copy) NSString *minPrice;//最低价
@property (nonatomic, copy) NSString *fromStation;//出发
@property (nonatomic, copy) NSString *toStation;//到达
@end

NS_ASSUME_NONNULL_END
