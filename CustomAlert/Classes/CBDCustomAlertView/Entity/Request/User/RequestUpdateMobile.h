//
//  RequestUpdateMobile.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestUpdateMobile : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
//@property (nonatomic,strong) NSString *oldMobileNo;
@property (nonatomic,strong,getter=newMobileNo) NSString *newMobileNo;
@property (nonatomic,strong) NSString *tokenCode;//短信验证码
//@property (nonatomic,strong) NSString *password;
//@property (nonatomic, strong)NSString *type;//类型，0：短信验证码；1：主动短信验证

@end
