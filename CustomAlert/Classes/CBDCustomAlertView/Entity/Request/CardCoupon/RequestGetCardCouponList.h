//
//  RequestGetCardCouponList.h
//  CarBaDa
//
//  Created by Jabir on 15/10/21.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCardCouponList : TCTRequestObject
@property (nonatomic,copy)NSString *memberId;
@property (nonatomic,copy)NSString *isActive;
@property (nonatomic,copy)NSString *pageIndex;
@property (nonatomic,copy)NSString *pageSize;

@end
