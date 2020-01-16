//
//  RequestGetDestCityList.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/5/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetDestCityList : TCTRequestObject

@property (nonatomic, copy) NSString *departCode;//出发地编码
@property (nonatomic, copy) NSString *departName;//出发地名称

@end

NS_ASSUME_NONNULL_END
