//
//  RequestMemberRealNameAuth.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/29.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestMemberRealNameAuth : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员ID
@property (nonatomic, copy) NSString *mobileNo;//会员手机号
@property (nonatomic, copy) NSString *realName;//真实姓名
@property (nonatomic, copy) NSString *idNumber;//身份证号码
//@property (nonatomic, copy) NSString *tokenCode;//验证码
//@property (nonatomic, copy) NSString *typeId;//短信类型
//@property (nonatomic, copy) NSString *activeVerCodeType;//主动验证码类型

@end

NS_ASSUME_NONNULL_END
