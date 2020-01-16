//
//  RequestResetPassword.h
//  CarBaDa
//
//  Created by zjb on 2017/6/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainResetPassword : TCTRequestObject
@property (nonatomic,copy) NSString *captche;
@property (nonatomic,copy) NSString *mobileNo;
@end
