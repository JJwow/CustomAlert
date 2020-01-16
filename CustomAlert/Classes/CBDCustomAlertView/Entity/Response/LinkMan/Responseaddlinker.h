//
//  Responseaddlinker.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IdentityInfo.h"

//1.1版本接口新增
@interface linker : NSObject

@property (nonatomic,strong) NSString *linkerId;//乘客ID
@property (nonatomic,strong) NSString *fullName;//乘客姓名
@property (nonatomic,strong) NSString *mobile;//乘客电话
@property (nonatomic, strong) NSString *passengerType;
@property (nonatomic, copy) NSString *birthday;
@property (nonatomic,strong) identityInfo *identityInfo;

@end

@interface Responseaddlinker : NSObject

//1.1版本接口新增
@property (nonatomic,strong) linker *linker;
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *description;
@property (nonatomic,strong) NSString *isSuccess;

@end
