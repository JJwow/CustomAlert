//
//  RequestGetPriceByPeoples.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetPriceByPeoples : TCTRequestObject

@property (nonatomic, copy) NSString *peoples;//人数

@property (nonatomic, copy) NSString *queryKey;//queryKey

@end

NS_ASSUME_NONNULL_END
