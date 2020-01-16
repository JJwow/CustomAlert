//
//  ResponseGetIndependencePackage.h
//  CarBaDa
//
//  Created by John on 2018/6/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetIndependencePackage : NSObject
@property (nonatomic , strong) NSString *packageId;//套餐id
@property (nonatomic , strong) NSString *price;//套餐单价
@property (nonatomic , strong) NSString *insuranceAmount;//保额
@property (nonatomic , strong) NSString *packageName;//套餐名称
@property (nonatomic , strong) NSString *packageDesp;//套餐描述
@property (nonatomic , strong) NSString *insCode;//保险code
@end
