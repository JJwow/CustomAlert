//
//  RequestGetVerifyCode.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTNetworkEngine.h"

@interface RequestGetVerifyCode : TCTRequestObject
@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic, copy) NSString *tokenCode;
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic,strong) NSString *typeId;//1:注册验证码 2:取回密码 3:更换手机号 5.绑定会员验证码 7.登录验证码 11.实名认证
@end
