//
//  RequestModifyTraveler.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/25.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestModifyTraveler : TCTRequestObject
@property (nonatomic, copy) NSString *address; //地址
@property (nonatomic, copy) NSString *bornDate; //出生日期
@property (nonatomic, copy) NSString *certNo; //证件号码
@property (nonatomic, copy) NSString *certType; //证件类型
@property (nonatomic, copy) NSString *email; //邮箱
@property (nonatomic, copy) NSString *memberId; //巴管会员ID
@property (nonatomic, copy) NSString *mobileNo; //手机号
@property (nonatomic, copy) NSString *operationtypeid; //与名称对应关系
@property (nonatomic, copy) NSString *passengerName; //乘客姓名
@property (nonatomic, copy) NSString *passengerType; //乘客类型
@property (nonatomic, copy) NSString *phoneNo; //固定电话号码
@property (nonatomic, copy) NSString *postalCode; //邮编
@property (nonatomic, copy) NSString *reqtoken; //请求特征值
@property (nonatomic, copy) NSString *sexCode; //性别代码
@property (nonatomic, copy) NSString *username; //12306登录账号
@property (nonatomic, copy) NSString *dateOfExpiry;//证件有效期
@property (nonatomic, copy) NSString *country;//国家地区二字码
@end
