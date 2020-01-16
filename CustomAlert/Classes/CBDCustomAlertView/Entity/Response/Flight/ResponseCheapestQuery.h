//
//  ResponseCheapestQuery.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/10/24.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@class flights;

@interface ResponseCheapestQuery : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *flights;

@end

NS_ASSUME_NONNULL_END
