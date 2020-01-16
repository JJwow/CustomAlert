//
//  ResponseGetMemberInfo.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface addressDetail : NSObject
@property (nonatomic, copy) NSString *province;//省
@property (nonatomic, copy) NSString *provinceId;
@property (nonatomic, copy) NSString *city;//市
@property (nonatomic, copy) NSString *cityId;
@property (nonatomic, copy) NSString *county;//区
@property (nonatomic, copy) NSString *countyId;

@end


@interface Responsegetmemberinfo : NSObject
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
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *memberTypeId;

@property (nonatomic,strong) NSString *points;
@property (nonatomic,strong) NSString *pointsSending;
@property (nonatomic,strong) NSString *scores;
@property (nonatomic,strong) NSString *level;
@property (nonatomic,strong) NSString *levelName;
@property (nonatomic, strong) NSString *birthday;//生日
@property (nonatomic, strong) NSString *isBindWxService;//是否开通微信服务号通知
@property (nonatomic,strong) addressDetail *addressDetail;//住址信息

@end
