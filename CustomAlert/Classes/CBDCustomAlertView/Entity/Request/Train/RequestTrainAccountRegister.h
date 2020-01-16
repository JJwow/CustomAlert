//
//  RequestTrainAccountRegister.h
//  CarBaDa
//
//  Created by zjb on 2017/6/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainAccountRegister : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *accountNo;
@property (nonatomic,strong) NSString *passWord;
@property (nonatomic,strong) NSString *passengerName;
@property (nonatomic,strong) NSString *mobileNo;
@property (nonatomic,strong) NSString *idType;
@property (nonatomic,strong) NSString *idCard;
@property (nonatomic,strong) NSString *captcha;
@end
