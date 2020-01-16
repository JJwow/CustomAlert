//
//  TrainHistoryCity.h
//  CarBaDa
//
//  Created by admin on 15/12/7.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainStations.h"

@interface TrainHistoryCity : NSObject

@property (nonatomic,strong) trainstations* fromCtiy;
@property (nonatomic,strong) trainstations* toCtiy;
@property (nonatomic, strong) NSDate * datetime;

@end
