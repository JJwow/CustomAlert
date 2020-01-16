//
//  Responsegetlinkerinfos.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IdentityInfo.h"

@interface linkerList : NSObject
@property (nonatomic,strong) NSString *linkerId;
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *email;
@property (nonatomic,strong) NSString *fullName;
@property (nonatomic,strong) NSString *mobile;
@property (nonatomic,strong) NSString *gender;
@property (nonatomic,strong) identityInfo *identityInfo;
@property (nonatomic,strong) NSString *birthday;
@property (nonatomic,strong) NSString *address;
@property (nonatomic, strong) NSString *checkStatus; //12306乘客验证状态unPass(-1, "未通过"), toBeChecked(0, "待核验"), checkPass(1, "已通过"), prePass(2, "预通过"), needVerify(3, "请报验");
@property (nonatomic, strong) NSString *checkStatusName; //12306验证状态名称
@property (nonatomic, strong) NSString *canBuyNow;
@property (nonatomic, strong) NSString *isSupport;//是否支持选择，1：支持；0：不支持，如果不支持则客户端需要置灰并不可点击
@property (nonatomic, strong) NSString *passengerType;//乘客类型，0-成人 1-儿童
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
@property (nonatomic, copy) NSString *isUserSelf;//12306是否本人
@property (nonatomic, assign) NSInteger iAge;//年龄

#pragma mark - 用于本地判断是否选中
@property (nonatomic, copy) NSString *bSelectedInLocal;//是否被选中
@end

@interface displayList : NSObject
@property (nonatomic, copy) NSString *certTypeId; //证件类型Id
@property (nonatomic, copy) NSString *certTypeName; //证件类型名称
@end
@interface Responsegetlinkerinfos : NSObject
@property (nonatomic,strong) NSMutableArray *linkerList;
@property (nonatomic, strong) NSMutableArray *displayList;
@property (nonatomic, copy) NSString *remark;//备注信息
@end


