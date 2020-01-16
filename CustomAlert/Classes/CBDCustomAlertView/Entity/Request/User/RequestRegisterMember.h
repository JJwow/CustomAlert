//
//  RequestRegisterMember.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTNetworkEngine.h"

@interface RequestRegisterMember : TCTRequestObject
@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic,strong) NSString *password;
@property (nonatomic,strong) NSString *resetCert;
@property (nonatomic,strong) NSString *tokenCode;
@property (nonatomic,strong) NSString *registType;//注册方式，0：手机号+验证码，1：手机号+主动短信验证
@property (nonatomic,strong) NSString *activeVerCode;
@end
