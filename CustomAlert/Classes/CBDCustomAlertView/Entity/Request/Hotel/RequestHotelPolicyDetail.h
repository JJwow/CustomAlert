//
//  RequestHotelPolicyDetail.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestHotelPolicyDetail : TCTRequestObject

@property (nonatomic, copy) NSString *endDate;//离店时间
@property (nonatomic, copy) NSString *productId;//房型Id
@property (nonatomic, copy) NSString *productUniqueId;//价格策略Id
@property (nonatomic, copy) NSString *resourceId;//酒店Id
@property (nonatomic, copy) NSString *startDate;//入住时间

@end
