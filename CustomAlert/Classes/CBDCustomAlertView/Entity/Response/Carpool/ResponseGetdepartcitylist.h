//
//  ResponseGetdepartcitylist.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDepartures.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetdepartcitylist : NSObject

@property (nonatomic, copy) NSString *isSuccess;

@property (nonatomic, copy) NSString *code;

@property (nonatomic, copy) NSString *desp;//错误描述

@property (nonatomic, copy) NSString *isPassed;

@property (nonatomic, copy) NSString *tips;

@property (nonatomic, strong) NSMutableArray *departureList;

@end

NS_ASSUME_NONNULL_END
