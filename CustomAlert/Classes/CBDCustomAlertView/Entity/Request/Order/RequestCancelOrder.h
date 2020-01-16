//
//  RequestCancelOrder.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCancelOrder : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *orderId;
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *orderSerialId;
@property (nonatomic,strong) NSString *operationId;//酒店让加，传1
@property (nonatomic,strong) NSString *cancelReason;

-(instancetype)init;
@end
