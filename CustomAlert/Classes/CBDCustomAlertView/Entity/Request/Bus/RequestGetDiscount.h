//
//  RequestGetCouponAmount.h
//  CarBaDa
//
//  Created by zjb on 2017/7/26.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetDiscount : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *projectType;
@end
