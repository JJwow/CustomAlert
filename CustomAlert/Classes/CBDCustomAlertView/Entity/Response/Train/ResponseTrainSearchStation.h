//
//  ResponseTrainSearchStation.h
//  CarBaDa
//
//  Created by 丁健 on 2018/6/21.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface trainCityList : NSObject
@property (nonatomic,copy) NSString *name;//城市名称
@property (nonatomic, copy) NSString *region;//括号里的名称
@property (nonatomic, copy) NSArray *trainstations;//搜索列表
@end


@interface ResponseTrainSearchStation : NSObject
@property (nonatomic, copy) NSArray *trainCityList;//城市列表
@end
