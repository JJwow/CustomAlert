//
//  ResponseSpeedPackage.h
//  CarBaDa
//
//  Created by zhaitong on 2019/4/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TrainOrderRaiseGrabLevelViewInterface.h"
NS_ASSUME_NONNULL_BEGIN
@interface speedPackList : NSObject <TrainOrderRaiseGrabLevelInterface>
//属性看.m 
@end
@interface ResponseSpeedPackage : NSObject
@property (nonatomic, strong) NSMutableArray *speedPackList;
@end

NS_ASSUME_NONNULL_END
