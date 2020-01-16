//
//  ResponseFlightEndorseQuery.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseFlightRefundQuery.h"


@class flights;

NS_ASSUME_NONNULL_BEGIN

@interface ResponseFlightEndorseQuery : TCTResponseObject

@property (nonatomic, strong) NSString *itineraryMailState;
@property (nonatomic, strong) NSMutableArray *flights;

@end

@interface endorsePassengers : refundPassengers

@end

NS_ASSUME_NONNULL_END
