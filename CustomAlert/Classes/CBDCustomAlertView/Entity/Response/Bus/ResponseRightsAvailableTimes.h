//
//  ResponseRightsAvailableTimes.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/17.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseRightsAvailableTimes : NSObject

@property (nonatomic, copy) NSString *times;//剩余次数

@property (nonatomic, copy) NSString *code;//206没有卡 205会员权益不存在

@end

NS_ASSUME_NONNULL_END
