//
//  Requestrecoverpassword.h
//  CarBaDa
//
//  Created by zhang on 15/7/3.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestrecoverpassword : TCTRequestObject
@property (nonatomic,strong)NSString *mobileNo;
@property (nonatomic,strong)NSString *tokenCode;
@property (nonatomic,strong,getter=newPassword)NSString *newPassword;
@property (nonatomic, copy) NSString *activeVerCodeType;//主动验证码传3，其余情况不传
@end
