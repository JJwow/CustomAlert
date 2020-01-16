//
//  RequestVerifyMobile.h
//  CarBaDa
//
//  Created by Vic_Li on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestVerifyMobile : TCTRequestObject
@property (nonatomic, copy)NSString *accountNo;//12306账号
@property (nonatomic, copy)NSString *mobileNo;//核验手机号
@property (nonatomic, copy)NSString *captcha;//验证码
@property (nonatomic, copy)NSString *memberId;//会员id

@end
