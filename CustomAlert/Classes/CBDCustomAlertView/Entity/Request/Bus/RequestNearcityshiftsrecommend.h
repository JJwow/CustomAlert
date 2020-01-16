//
//  RequestNearcityshiftsrecommend.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/2/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestNearcityshiftsrecommend : TCTRequestObject

@property (nonatomic, copy) NSString *departure;//出发城市

@property (nonatomic, copy) NSString *destination;//到达城市

@end

NS_ASSUME_NONNULL_END
