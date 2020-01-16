//
//  RequestFlightOrderEndorse.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightOrderEndorse : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *serialId;
@property (nonatomic, strong) NSString *depDate;
@property (nonatomic, strong) NSString *cabinCode;
@property (nonatomic, strong) NSString *flightNo;
@property (nonatomic, strong) NSMutableArray *passengerIds;

@end

NS_ASSUME_NONNULL_END
