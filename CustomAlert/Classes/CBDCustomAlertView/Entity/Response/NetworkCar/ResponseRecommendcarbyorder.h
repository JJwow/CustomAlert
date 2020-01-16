//
//  ResponseRecommendcarbyorder.h
//  CarBaDa
//
//  Created by mini on 2019/4/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetHotelDetail.h"

@interface ResponseRecommendcarbyorder : NSObject

@property (nonatomic, strong) NSMutableArray *priceList;
@property (nonatomic, strong) NSString *queryKey;

@end
