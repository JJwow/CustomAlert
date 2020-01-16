//
//  RequestGetLinkerIdentityInfo.h
//  CarBaDa
//
//  Created by zhaitong on 17/5/5.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetLinkerIdentityInfo : TCTRequestObject
@property (nonatomic, copy) NSString *identityType;//0-无；1-学生；2-军人；3-残疾
@property (nonatomic, copy) NSString *linkerId;//常旅id
@end
