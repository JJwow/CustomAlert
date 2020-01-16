//
//  RequestRegisterByOpenId.h
//  CarBaDa
//
//  Created by admin on 15/9/11.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestRegisterByOpenId : TCTRequestObject

@property (nonatomic,copy) NSString *LoginType;
@property (nonatomic,copy) NSString *MobileNo;
@property (nonatomic,copy) NSString *OpenId;
@property (nonatomic,copy) NSString *TokenCode;

@end
