//
//  ResponseDeleteOrder.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface ResponseDeleteOrder : TCTRequestObject
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic, strong) NSString *description;
@end
