//
//  RequestRightsAvailableTimes.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/17.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestRightsAvailableTimes : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id

@property (nonatomic, copy) NSString *rightsType;//8 权益类型

@end

NS_ASSUME_NONNULL_END
