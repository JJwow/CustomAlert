//
//  ResponseGetAcCityList.h
//  CarBaDa
//
//  Created by 丁健 on 2019/5/15.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResponseGetAcCityList : NSObject
@property (nonatomic, copy) NSString *isPassed;
@property (nonatomic, copy) NSString *tips;
@property (nonatomic, copy) NSMutableArray *hotCityList;
@property (nonatomic, copy) NSMutableArray *departureList;

@end

