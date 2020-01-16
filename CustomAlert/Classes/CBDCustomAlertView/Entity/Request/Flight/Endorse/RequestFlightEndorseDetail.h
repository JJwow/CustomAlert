//
//  RequestFlightEndorseDetail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/11.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightEndorseDetail : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *serialId;//改签订单号

@end

NS_ASSUME_NONNULL_END
