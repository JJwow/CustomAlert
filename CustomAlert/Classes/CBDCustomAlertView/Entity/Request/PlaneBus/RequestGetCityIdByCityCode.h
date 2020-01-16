//
//  RequestGetCityIdByCityCode.h
//  CarBaDa
//
//  Created by 丁健 on 2019/11/4.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetCityIdByCityCode : TCTRequestObject
@property (nonatomic, copy) NSString *cityCode;
@end

NS_ASSUME_NONNULL_END
