//
//  ResponseGetAllCityList.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/5/28.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"


@class cityList;

@interface ResponseGetAllCityList : TCTResponseObject

@property (nonatomic, copy) NSString *versionCode;//版本
@property (nonatomic, copy) NSString *isSuccess;//

@property (nonatomic, strong) NSMutableArray *cityList;

@end


