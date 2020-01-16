//
//  RequestLoginByOpenId.h
//  CarBaDa
//
//  Created by admin on 15/9/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestLoginByOpenId : TCTRequestObject

@property (nonatomic,copy) NSString *code;
@property (nonatomic,copy) NSString *loginType;//1.微信 2.QQ 3.支付宝 4：手机号+主动短信验证

@end
