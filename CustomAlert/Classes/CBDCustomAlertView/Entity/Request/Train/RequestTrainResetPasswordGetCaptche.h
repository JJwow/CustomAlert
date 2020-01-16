//
//  RequestTrainResetPasswordGetCaptche.h
//  CarBaDa
//
//  Created by zjb on 2017/6/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainResetPasswordGetCaptche : TCTRequestObject
@property (nonatomic,copy) NSString *idCard;//证件号
@property (nonatomic,copy) NSString *idType;//证件类型	1:二代身份证
@property (nonatomic,copy) NSString *mobileNo;//手机号
@property (nonatomic,copy) NSString *password;//密码
@end
