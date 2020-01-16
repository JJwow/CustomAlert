//
//  RequestTrainNoMinPrice.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/10/24.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestTrainNoMinPrice : TCTRequestObject
@property (nonatomic, copy) NSString *trainDate;//日期  2016-09-01
@property (nonatomic, copy) NSString *fromStation;//外显出发城市 上海
@property (nonatomic, copy) NSString *toStation;//外显到达城市 苏州
@end

NS_ASSUME_NONNULL_END
