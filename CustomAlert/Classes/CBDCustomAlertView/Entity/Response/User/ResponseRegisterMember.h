//
//  ResponseRegisterMember.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseRegisterMember : NSObject
@property (nonatomic,strong) NSString *memberId;
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

@property (nonatomic,strong) NSString *isCanBeInvited;//0不能被邀请 1能被邀请

@end
