//
//  RequestUpdatePassword.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTNetworkEngine.h"

@interface RequestUpdatePassword : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *oldPassword;
@property (nonatomic,strong,getter=newPassword) NSString *newPassword;
@end
