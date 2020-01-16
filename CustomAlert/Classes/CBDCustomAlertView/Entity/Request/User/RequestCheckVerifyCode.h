//
//  RequestCheckVerifyCode.h
//  CarBaDa
//
//  Created by zhaitong on 16/4/7.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCheckVerifyCode : TCTRequestObject
@property (nonatomic, copy) NSString *mobileNo;
@property (nonatomic, copy) NSString *tokenCode;
@property (nonatomic, copy) NSString *typeId;  // 1:注册验证码 2:取回密码 5.绑定会员验证码 7.登录验证码 8.取回密码主动验证 11.实名认证
@property (nonatomic, copy) NSString *activeVerCodeType;//3:忘记密码主动验证码使用 4:实名认证主动验证码
@end
