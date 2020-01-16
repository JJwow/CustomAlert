//
//  ResponseUpdateMobile.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseUpdateMobile : NSObject
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
@end
