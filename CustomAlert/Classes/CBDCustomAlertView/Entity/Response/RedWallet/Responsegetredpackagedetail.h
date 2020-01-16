//
//  Responsegetredpackagedetail.h
//  CarBaDa
//
//  Created by zhang on 15/7/2.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Responsegetredpackagedetail : NSObject
@property (nonatomic,strong) NSString *couponCode;
@property (nonatomic,strong) NSString *batchType;
@property (nonatomic,strong) NSString *batchTypeName;
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *projectTypeName;
@property (nonatomic,strong) NSString *minOrderAmount;
@property (nonatomic,strong) NSString *couponAmount;
@property (nonatomic,strong) NSString *startDate;
@property (nonatomic,strong) NSString *overdueDate;
@property (nonatomic,strong) NSString *isActive;
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSArray *desp;

@property (nonatomic, strong)NSString *isSupport;//是否支持当前客户端版本  0-不支持；1-支持
@property (nonatomic, strong)NSString *downLoadUrl;
@end
