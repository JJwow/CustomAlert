//
//  ResponseGetForeCastTime.h
//  CarBaDa
//
//  Created by mini on 2018/9/7.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetForeCastTime : NSObject
//预估时长分钟
@property (nonatomic, strong) NSString *estimateTime;
@property (nonatomic, strong) NSString *trafficDistance;
//查询key
@property (nonatomic, strong) NSString *estimateKey;
@property (nonatomic, strong) NSString *dptType;

@end
