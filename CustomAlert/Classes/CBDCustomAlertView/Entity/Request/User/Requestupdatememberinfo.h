//
//  Requestupdatememberinfo.h
//  CarBaDa
//
//  Created by zhang on 15/7/3.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "Responsegetmemberinfo.h"

@interface Requestupdatememberinfo : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *headerImage;
@property (nonatomic,strong) NSString *signature;
@property (nonatomic,strong) NSString *fullName;
@property (nonatomic,strong) NSString *loginName;
@property (nonatomic,strong) NSString *aliasName;
@property (nonatomic,strong) NSString *gender;

@property (nonatomic, copy) NSString *birthday;
@property (nonatomic, strong)addressDetail *addressDetail;

@end
