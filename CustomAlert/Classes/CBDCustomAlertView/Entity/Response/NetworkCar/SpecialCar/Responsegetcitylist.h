//
//  Responsegetcitylist.h
//  CarBaDa
//
//  Created by mini on 2018/9/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDepartures.h"


@interface Responsegetcitylist : NSObject
@property (nonatomic, strong) NSMutableArray *departureList;
@property (nonatomic, strong) NSMutableArray *hotCityList;
@end
