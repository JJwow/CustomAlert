//
//  ResponseGetSaleCoupons.h
//  CarBaDa
//
//  Created by zjb on 2017/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetActiveCouponList.h"

@interface ResponseGetSaleCoupons : NSObject
@property (nonatomic,strong) NSMutableArray *cashCouponList;
@end
