//
//  RequestGetCardCouponDetail.h
//  CarBaDa
//
//  Created by Jabir on 15/10/22.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCardCouponDetail : TCTRequestObject
@property (nonatomic,copy)NSString *memberId;
@property (nonatomic,copy)NSString *cardCode;

@end
