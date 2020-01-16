//
//  RequestRegister12306CheckInfo.h
//  CarBaDa
//
//  Created by zhaitong on 2017/6/28.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestRegister12306CheckInfo : TCTRequestObject
@property (nonatomic, copy) NSString *idCard;//证件号
@property (nonatomic, copy) NSString *idType;//证件类型（1 二代身份证 2 护照 3 一代身份证 4 外国人居留证 6 港澳通行证 7 台胞证）
@property (nonatomic, copy) NSString *mobileNo;//手机号
@property (nonatomic, copy) NSString *passengerName;//姓名
@end
