//
//  ResponseLoginByOpenId.h
//  CarBaDa
//
//  Created by admin on 15/9/11.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseLoginByOpenId : NSObject

@property (nonatomic,strong) NSString *openCode;//判断是否注册,1.未注册 2.已注册
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
@property (nonatomic,strong) NSString * openId;
@property (nonatomic,strong) NSString *level;
@property (nonatomic,strong) NSString *levelName;
@property (nonatomic,strong) NSString *code;

@end
