//
//  ResponseRecommendUseTime.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTimeInventory.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseRecommendUseTime : NSObject

@property (nonatomic, copy) NSArray *timeInventorys;//推荐时间段数组

@end

NS_ASSUME_NONNULL_END
