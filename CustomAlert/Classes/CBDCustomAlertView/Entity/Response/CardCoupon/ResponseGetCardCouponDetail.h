//
//  ResponseGetCardCouponDetail.h
//  CarBaDa
//
//  Created by Jabir on 15/10/22.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetCardCouponDetail : NSObject
@property (nonatomic,copy)NSString *startDate;
@property (nonatomic,copy)NSString *overdueDate;
@property (nonatomic,copy)NSString *address;
@property (nonatomic,copy)NSString *name;
@property (nonatomic,copy)NSString *couponAmount;
@property (nonatomic,copy)NSString *cardCode;
@property (nonatomic,copy)NSString *cardName;
@property (nonatomic,copy)NSArray *desp;

@end
