//
//  RequestGetHotSites.h
//  CarBaDa
//
//  Created by zjb on 2019/5/20.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetHotSites : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic, copy) NSString *cityName;//城市名称
@property (nonatomic, copy) NSString *cityCode;//城市编码
@end

NS_ASSUME_NONNULL_END
