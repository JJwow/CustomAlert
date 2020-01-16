//
//  ResponseGetPointRange.h
//  CarBaDa
//
//  Created by 丁健 on 2019/10/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface pointRanges : NSObject
@property (nonatomic, copy) NSString *gdLng;//经度（高德）
@property (nonatomic, copy) NSString *gdLat;//纬度（高德）
@end

@interface ResponseGetPointRange : NSObject
@property (nonatomic, copy) NSArray *pointRanges;//区域点集合
@end

