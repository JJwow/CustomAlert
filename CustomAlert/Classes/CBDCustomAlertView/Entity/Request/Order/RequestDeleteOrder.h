//
//  RequestDeleteOrder.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestDeleteOrder : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *orderId;
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *orderSerialId;

- (instancetype)init;
@end
