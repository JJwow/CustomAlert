//
//  ResponseGetAutoCompletion.h
//  CarBaDa
//
//  Created by Alex on 2017/4/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetAutoCompletion : NSObject
@property (nonatomic,strong) NSArray *autoCompletionList;
@property (nonatomic,strong) NSString *tagInfoTitle;
@property (nonatomic,strong) NSArray *otherCityList;
@property (nonatomic,strong) NSString *isSuccess;
@end

@interface autoCompletionList : NSObject

@property (nonatomic,copy) NSString *name;//名称
@property (nonatomic,copy) NSString *resourceId;//资源ID
@property (nonatomic,copy) NSString *typeName;//类型名称
@property (nonatomic,copy) NSString *typeNameEn;
@property (nonatomic,copy) NSString *lon;//经度
@property (nonatomic,copy) NSString *lat;//纬度
@property (nonatomic,copy) NSString *filterType;
@property (nonatomic,copy) NSString *filterId;
@property (nonatomic,copy) NSString *distance;
@property (nonatomic,copy) NSString *address;

@property (nonatomic,copy) NSString *districtId;
@property (nonatomic,copy) NSString *districtName;
@end

@interface otherCityList : NSObject
@property (nonatomic,copy) NSString *resourceId;//资源ID
@property (nonatomic,copy) NSString *name;//名称
@property (nonatomic,copy) NSString *bizType;//类型
@property (nonatomic,copy) NSString *bizTypeName;//类型名称
@property (nonatomic,copy) NSString *bizTypeId;
@property (nonatomic,copy) NSString *lon;//经度
@property (nonatomic,copy) NSString *lat;//纬度
@property (nonatomic,copy) NSString *sectionId;//县ID
@property (nonatomic,copy) NSString *sectionName;//县名称
@property (nonatomic,copy) NSString *cityId;//市ID
@property (nonatomic,copy) NSString *cityName;//市名
@property (nonatomic,copy) NSString *provinceId;//省ID
@property (nonatomic,copy) NSString *provinceName;//省名

@end
