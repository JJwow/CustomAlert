//
//  RequestTrainRegisterCheckCaptcha.h
//  CarBaDa
//
//  Created by zjb on 2017/6/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainRegisterCheckCaptcha : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *captcha;
@end
