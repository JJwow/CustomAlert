//
//  RequestWeatherQuery.h
//  CarBaDa
//
//  Created by 张嘉畀 on 2019/8/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestWeatherQuery : TCTRequestObject
@property (nonatomic, copy) NSString *cityIds;//城市id，多个以逗号隔开
@end

NS_ASSUME_NONNULL_END
