//
//  ResponseGetDestCityList.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/5/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDestinations.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetDestCityList : NSObject

@property (nonatomic, strong) NSMutableArray *destinationList;

@end

NS_ASSUME_NONNULL_END
