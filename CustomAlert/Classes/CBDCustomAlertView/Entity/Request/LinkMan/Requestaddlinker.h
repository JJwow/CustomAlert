//
//  Requestaddlinker.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "IdentityInfo.h"
@interface Requestaddlinker : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *fullName;
@property (nonatomic,strong) NSString *mobile;
@property (nonatomic,strong) NSString *gender;
@property (nonatomic,strong) NSString *certTypeId;//	Int	证件类型（1-身份证2-护照3-驾照4-军人证5-回乡证6-港澳通行证7-台胞证8-其他）
@property (nonatomic,strong) NSString *certNumber;
@property (nonatomic,strong) NSString *birthday;
@property (nonatomic,strong) NSString *address;
@property (nonatomic, strong) NSString *passengerType;//乘客类型 0成人 1儿童
@property (nonatomic, copy) NSString *identityType;//身份类型，0-无；1-学生；2-军人；3-残疾
@property (nonatomic, copy) NSString *school;//学校名称
@property (nonatomic, copy) NSString *schoolCode;//学校code
@property (nonatomic, copy) NSString *schoolPro;//学校省份
@property (nonatomic, copy) NSString *schoolProCode;//学校省份code
@property (nonatomic, copy) NSString *studentNO;//学号
@property (nonatomic, copy) NSString *duration;//学制
@property (nonatomic, copy) NSString *schoolYear;//入学年份
@property (nonatomic, copy) NSString *arrCityByStu;//优惠段始
@property (nonatomic, copy) NSString *arrCityByStuCode;//优惠段始code
@property (nonatomic, copy) NSString *endCityByStu;//优惠段终
@property (nonatomic, copy) NSString *endCityByStuCode;//优惠段终code
@property (nonatomic, copy) NSString *dateOfExpiry;//证件有效期
@property (nonatomic, copy) NSString *country;//国家地区二字码
@property (nonatomic, copy) NSString *isSelf;//是否本人（0.否，1、是）
@property (nonatomic,strong) identityInfo *identityInfo;
@end


