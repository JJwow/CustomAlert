//
//  ResponseLogin.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseLogin : NSObject

@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *memberTypeId;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *headImage;
@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic,strong) NSString *signature;
@property (nonatomic,strong) NSString *fullName;
@property (nonatomic,strong) NSString *loginName;
@property (nonatomic,strong) NSString *aliasName;
@property (nonatomic,strong) NSString *gender;
@property (nonatomic,strong) NSString *authorizeCode;
@property (nonatomic,strong) NSString *level;
@property (nonatomic,strong) NSString *levelName;
@property (nonatomic, copy) NSString *registerDate;//注册时间
@property (nonatomic, copy) NSString *birthday;
@property (nonatomic, strong) NSString *isBindWxService;//是否开通微信服务号通知
@end
