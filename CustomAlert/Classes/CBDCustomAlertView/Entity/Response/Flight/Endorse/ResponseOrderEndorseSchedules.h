//
//  ResponseOrderEndorseSchedules.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseSearchFlightlist.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseOrderEndorseSchedules : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *flights;

@end

NS_ASSUME_NONNULL_END
