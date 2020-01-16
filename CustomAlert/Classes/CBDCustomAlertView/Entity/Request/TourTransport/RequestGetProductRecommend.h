//
//  RequestGetProductRecommend.h
//  CarBaDa
//
//  Created by zjb on 16/5/4.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetProductRecommend : TCTRequestObject
@property (nonatomic,copy) NSString *endCity;
@property (nonatomic,copy) NSString *departureDate;
@property (nonatomic,copy) NSString *recommendType;
@property (nonatomic,copy) NSString *startCity;
@end
