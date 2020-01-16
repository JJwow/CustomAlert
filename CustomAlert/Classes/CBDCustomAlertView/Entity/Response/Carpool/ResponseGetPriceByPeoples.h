//
//  ResponseGetPriceByPeoples.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetlineprice.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetPriceByPeoples : NSObject

@property (nonatomic, copy) NSString *lineId;//线路Id

@property (nonatomic, copy) NSString *passKmPrice;//超公里价    按公里计价

@property (nonatomic, copy) NSString *dptRangePrice;//上车点范围加价    按范围计价

@property (nonatomic, copy) NSString *arrRangePrice;//下车点范围加价    按范围计价

@property (nonatomic, strong) NSMutableArray *carPoolPriceList;//价格

@end

NS_ASSUME_NONNULL_END
