//
//  ResponseGetCityByStudent.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface  stuCityList : NSObject
@property (nonatomic, copy) NSString *cityCode;//城市编码
@property (nonatomic, copy) NSString *cityName;//城市名称
@end


@interface ResponseGetCityByStudent : NSObject
@property (nonatomic, strong) NSMutableArray *stuCityList;//城市列表
@end
