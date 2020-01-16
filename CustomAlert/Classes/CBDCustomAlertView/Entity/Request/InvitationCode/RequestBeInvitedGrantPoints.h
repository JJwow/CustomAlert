//
//  RequestBeInvitedGrantPoints.h
//  CarBaDa
//
//  Created by zjb on 16/5/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestBeInvitedGrantPoints : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *deviceNo;
@property (nonatomic,copy) NSString *invitationCode;

@end
