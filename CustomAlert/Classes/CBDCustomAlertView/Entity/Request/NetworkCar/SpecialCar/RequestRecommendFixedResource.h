//
//  RequestRecommendFixedResource.h
//  CarBaDa
//
//  Created by mini on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
#import "RequestCreatePlaceOrder.h"
NS_ASSUME_NONNULL_BEGIN

@interface RequestRecommendFixedResource : TCTRequestObject

@property (nonatomic, strong) NSString *dptAdCode;  //出发城市code
@property (nonatomic, strong) NSString *depLongitude;  //出发地经度
@property (nonatomic, strong) NSString *depLatitude;  //出发地纬度
@property (nonatomic, strong) NSString *queryKey;  //资源接口返回的key
@property (nonatomic, strong) NSMutableArray *resourceList;  //


@end

NS_ASSUME_NONNULL_END
