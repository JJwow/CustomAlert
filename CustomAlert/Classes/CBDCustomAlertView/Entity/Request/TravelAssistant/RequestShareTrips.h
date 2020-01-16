//
//  RequestShareTrips.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/10/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestShareTrips : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialIds;//订单流水号，多个则英文逗号隔开

@end

NS_ASSUME_NONNULL_END
