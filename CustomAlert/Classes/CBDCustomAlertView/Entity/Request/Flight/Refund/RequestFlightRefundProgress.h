//
//  RequestFlightRefundProgress.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightRefundProgress : TCTRequestObject

@property (nonatomic, copy) NSString *refundSerialId;
@property (nonatomic, copy) NSString *memberId;

@end

NS_ASSUME_NONNULL_END
