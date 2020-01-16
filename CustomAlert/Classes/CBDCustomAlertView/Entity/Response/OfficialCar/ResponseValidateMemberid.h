//
//  ResponseValidateMemberid.h
//  CarBaDa
//
//  Created by Jabir on 15/12/15.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface ResponseValidateMemberid : TCTRequestObject
@property (nonatomic,strong)NSString *isCustomer;
@property (nonatomic,strong)NSString *isSuccess;
@property (nonatomic,strong)NSString *description;
@property (nonatomic,strong)NSString *code;
@end
