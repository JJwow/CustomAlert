//
//  RequestFlightEndorseQuery.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightEndorseQuery : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *serialId;

@end

NS_ASSUME_NONNULL_END
