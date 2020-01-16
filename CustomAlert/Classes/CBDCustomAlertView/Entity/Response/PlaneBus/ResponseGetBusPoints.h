//
//  ResponseGetBusPoints.h
//  CarBaDa
//
//  Created by 丁健 on 2019/7/15.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface busPoints : NSObject
@property (nonatomic, copy) NSString *pointName;//站点名称
@property (nonatomic, copy) NSString *pointType;//站点类型    0 上车点；1下车点
@property (nonatomic, copy) NSString *gdLng;//站点经度（高德）
@property (nonatomic, copy) NSString *gdLat;//站点纬度（高德）
@property (nonatomic, copy) NSString *nearPoint;//最近点    0 否 ； 1 是
@property (nonatomic, copy) NSString *isLocalSelected;//非接口给（是否选中）
@end


@interface ResponseGetBusPoints : NSObject
@property (nonatomic, copy) NSArray *busPoints;
@end

