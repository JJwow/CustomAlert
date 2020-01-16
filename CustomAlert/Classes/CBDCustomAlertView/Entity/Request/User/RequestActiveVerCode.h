//
//  RequestActiveVerCode.h
//  CarBaDa
//
//  Created by Vic_Li on 16/8/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestActiveVerCode : TCTRequestObject
@property (nonatomic, copy) NSString *mobileNo;//手机号
@property (nonatomic, copy) NSString *type;//0-注册验证码，1-登录验证码 2-修改手机验证码 3- 忘记密码
@end
