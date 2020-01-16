//
//  ResponseModifyTraveler.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/25.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseModifyTraveler : NSObject
@property (nonatomic, strong) NSString *isModifySuccess;
@property (nonatomic, strong) NSString *isSuccess;
@property (nonatomic, copy) NSString *certNo; //新增乘客证件号
@property (nonatomic, copy) NSString *mobileNo; //新增乘客手机号码
@property (nonatomic, copy) NSString *passengerName; //新增乘客姓名
@property (nonatomic, copy) NSString *modifyFailMsg; //新增失败原因
@end
