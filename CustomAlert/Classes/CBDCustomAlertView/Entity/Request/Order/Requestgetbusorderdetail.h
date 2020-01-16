//
//  Requestgetbusorderdetail.h
//  CarBaDa
//
//  Created by zhang on 15/6/30.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetbusorderdetail : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *orderId;
@property (nonatomic,strong) NSString *orderSerialId;
@end
