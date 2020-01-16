//
//  ResponseNearcityshiftsrecommend.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/2/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseNearcityshiftsrecommend : NSObject

@property (nonatomic, copy) NSString *nearCityName;//推荐的临近城市名称

@property (nonatomic, copy) NSString *nearCityRemark;//推荐文案，例如：苏州是常熟的上级城市

@property (nonatomic, copy) NSString *departure;//出发城市

@property (nonatomic, copy) NSString *destination;//到达城市

@end

NS_ASSUME_NONNULL_END
