//
//  ResponseGetProvinceByStudent.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface provinceList : NSObject
@property (nonatomic, copy) NSString *provinceCode;//省份编码
@property (nonatomic, copy) NSString *provinceName;//省份名称
@end


@interface ResponseGetProvinceByStudent : NSObject
@property (nonatomic, strong) NSMutableArray *provinceList;//省份列表
@end
