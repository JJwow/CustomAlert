//
//  ResponseGetLinkerIdentityInfo.h
//  CarBaDa
//
//  Created by zhaitong on 17/5/5.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetLinkerIdentityInfo : NSObject
@property (nonatomic, copy) NSString *arrCityByStu;//优惠段始
@property (nonatomic, copy) NSString *arrCityByStuCode;//优惠段始Code
@property (nonatomic, copy) NSString *duration;//学制
@property (nonatomic, copy) NSString *endCityByStu;//优惠段终
@property (nonatomic, copy) NSString *endCityByStuCode;//优惠段终Code
@property (nonatomic, copy) NSString *identityType;//身份类型	0-无；1-学生；2-军人；3-残疾
@property (nonatomic, copy) NSString *school;//学校名称
@property (nonatomic, copy) NSString *schoolCode;//学校code
@property (nonatomic, copy) NSString *schoolPro;//	学校所属省份
@property (nonatomic, copy) NSString *schoolProCode;//学校所属省份code
@property (nonatomic, copy) NSString *schoolYear;//入学年份
@property (nonatomic, copy) NSString *studentNO;//学号
@end
