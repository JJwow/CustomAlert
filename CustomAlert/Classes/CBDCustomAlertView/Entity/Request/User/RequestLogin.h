//
//  RequestLogin.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTNetworkEngine.h"

@interface RequestLogin : TCTRequestObject

@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic,strong) NSString *password;
@property (nonatomic,strong) NSString *platType;//传0
@property (nonatomic,strong) NSString *AuthorizeCode;
@property (nonatomic,strong) NSString *tokenCode;
@property (nonatomic, copy) NSString *loginType; //登录方式1:手机号+密码 2：登录授权码 3：手机号+短信验证码 4：手机号+主动短信验证
@property (nonatomic, copy) NSString *memberid;
@end
