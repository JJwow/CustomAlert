//
//  ResponseVerifyMobile.h
//  CarBaDa
//
//  Created by Vic_Li on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseVerifyMobile : NSObject
@property (nonatomic, copy)NSString *accountNo;//核验账号
@property (nonatomic, copy)NSString *isSuccess;
@property (nonatomic, copy)NSString *isVerifySuccess;//是否核验成功  0、核验不成功 1、核验成功
@property (nonatomic, copy)NSString *mobileNo;//核验手机号
@property (nonatomic, copy)NSString *verifyFailMsg;//不能核验原因

@end
