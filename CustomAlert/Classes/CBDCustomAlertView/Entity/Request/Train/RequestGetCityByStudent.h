//
//  RequestGetCityByStudent.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCityByStudent : TCTRequestObject
@property (nonatomic, copy) NSString *pageIndex;//页码
@property (nonatomic, copy) NSString *pageSize;//每页条数
@property (nonatomic, copy) NSString *searchWord;//搜索词
@end
