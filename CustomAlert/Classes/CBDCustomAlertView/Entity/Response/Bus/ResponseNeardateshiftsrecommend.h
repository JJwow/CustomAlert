//
//  ResponseNeardateshiftsrecommend.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/2/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface dateList : NSObject

@property (nonatomic, copy) NSString *date;//日期，格式为yyyy-mm-dd

@property (nonatomic, copy) NSString *state;//0-无票，1-有票

@end

@interface ResponseNeardateshiftsrecommend : NSObject

@property (nonatomic, strong) NSArray *dateList;//日期列表

@end

NS_ASSUME_NONNULL_END
