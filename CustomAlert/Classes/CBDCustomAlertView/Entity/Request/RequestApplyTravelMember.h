//
//  RequestApplyTravelMember.h
//  CarBaDa
//
//  Created by zhaitong on 2019/12/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestApplyTravelMember : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic, copy) NSString *accountNo; //会员账号
@property (nonatomic, copy) NSString *memberPwd; //6位密码
@property (nonatomic, copy) NSString *certType; //证件类型
@property (nonatomic, copy) NSString *certNo; //证件号
@property (nonatomic, copy) NSString *name; //姓名
@property (nonatomic, copy) NSString *mobileNo; //手机号
@end

NS_ASSUME_NONNULL_END
