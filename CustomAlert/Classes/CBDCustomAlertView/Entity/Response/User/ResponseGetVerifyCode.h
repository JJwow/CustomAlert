//
//  ResponseGetVerifyCode.h
//  CarBaDa
//
//  Created by Alex on 6/8/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetVerifyCode : NSObject
@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic,strong) NSString *sendDate;
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *isSuccess;
@end
