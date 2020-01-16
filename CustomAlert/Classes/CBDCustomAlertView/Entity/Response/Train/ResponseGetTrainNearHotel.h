//
//  ResponseGetTrainNearHotel.h
//  CarBaDa
//
//  Created by zhaitong on 2017/8/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseTrainProjectRecommend.h"
@interface ResponseGetTrainNearHotel : NSObject
@property (nonatomic, copy) NSString *mileSeconds;
@property (nonatomic, copy) NSArray *nearbyList;
@end
