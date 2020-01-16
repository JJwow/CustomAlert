//
//  Requestgetpaystatement.h
//  CarBaDa
//
//  Created by Alex on 15/6/29.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetpaystatement : TCTRequestObject
@property (nonatomic, strong) NSString *mobileOSVersion;//手机系统版本
@property (nonatomic, strong) NSString *mobileVersion;//手机型号
@property (nonatomic, strong) NSString *siteType;//站点类型    1: PC站 2:App
@property (nonatomic, strong) NSString *projectId;
@property (nonatomic, strong) NSString *insuranceAmount;//500新增 保险金额
@end
