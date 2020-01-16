//
//  RequestGetCashCouponDetail.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/5/2.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCouponDetail : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *memberCouponId;

@end
