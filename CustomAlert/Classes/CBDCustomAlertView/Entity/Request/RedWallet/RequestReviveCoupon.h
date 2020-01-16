//
//  RequestReviveCoupon.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/9/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestReviveCoupon : TCTRequestObject

@property (nonatomic , copy) NSString *memberId;
@property (nonatomic , copy) NSString *couponCode;

@end
