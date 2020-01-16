//
//  RequestSendPassword.h
//  CarBaDa
//
//  Created by Vic_Li on 16/6/1.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestSendPassword : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *passWord;//口令
@property (nonatomic, copy)NSString *pwdType;//口令类型  0：红包 1：卡券

@end
