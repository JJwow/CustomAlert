//
//  ResponseRecommendFixedResource.h
//  CarBaDa
//
//  Created by mini on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetHotelDetail.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseRecommendFixedResource : NSObject
@property (nonatomic, strong) NSMutableArray *priceList;
@property (nonatomic, strong) NSString *queryKey;
@end

NS_ASSUME_NONNULL_END
