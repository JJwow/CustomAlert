//
//  ResponseGetCarpoolRecommendMerge.h
//  CarBaDa
//
//  Created by John on 2018/11/4.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Responsegetorderlist.h"

NS_ASSUME_NONNULL_BEGIN

@interface recommendList : NSObject

@property (nonatomic, copy) NSString *serviceTime;

@property (nonatomic, copy) NSString *totalSeats;

@property (nonatomic, copy) NSString *remainSeat;

@property (nonatomic, copy) NSString *mergeNum;

@property (nonatomic, strong) NSMutableArray *orderList;

@end

@interface ResponseGetCarpoolRecommendMerge : NSObject

@property (nonatomic, strong) NSMutableArray *recommendList;

@end

NS_ASSUME_NONNULL_END
