//
//  ResponseGetRangeStopOversInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2017/12/4.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@class trains;
@interface ResponseGetRangeStopOversInfo : NSObject
@property (nonatomic, copy) NSString *canGrab;//是否可以抢票
@property (nonatomic, copy) NSArray *trains;
@end
