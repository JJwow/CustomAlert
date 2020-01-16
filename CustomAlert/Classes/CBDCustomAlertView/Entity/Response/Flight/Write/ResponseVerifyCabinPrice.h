//
//  ResponseVerifyCabinPrice.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@class flights;

@interface ResponseVerifyCabinPrice : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *flights;

@end

NS_ASSUME_NONNULL_END
