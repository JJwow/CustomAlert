//
//  ResponseGetTerminalInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2019/7/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResponseGetTerminalInfo : NSObject
@property (nonatomic, copy) NSString *cityName;//城市名称
@property (nonatomic, copy) NSString *cityId;//城市id
@property (nonatomic, copy) NSString *cityCode;
@property (nonatomic, copy) NSString *airportName;//机场名称
@property (nonatomic, copy) NSString *terminalName;//航站楼名称
@property (nonatomic, copy) NSString *gdLng;//站点经度（高德）
@property (nonatomic, copy) NSString *gdLat;//站点纬度（高德）
@end

