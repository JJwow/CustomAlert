//
//  ResponseGetFixedResource.h
//  CarBaDa
//
//  Created by mini on 2019/10/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetResource.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetFixedResource : NSObject

@property (nonatomic, strong) NSMutableArray *serviceList;
@property (nonatomic, strong) NSMutableArray *brandServiceList; //滴滴
@property (nonatomic, strong) NSMutableArray *singleServiceList; //出租车
@property (nonatomic, strong) NSMutableArray *carpoolList; //拼车
@property (nonatomic, strong) NSString *queryKey;


@end

NS_ASSUME_NONNULL_END
