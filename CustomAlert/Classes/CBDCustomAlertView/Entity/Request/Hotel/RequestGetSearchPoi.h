//
//  RequestGetSearchPoi.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/20.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetSearchPoi : TCTRequestObject

@property (nonatomic, copy) NSString *caller; //调用方(app、pc)
@property (nonatomic, copy) NSString *cityId; //城市ID
@property (nonatomic, copy) NSString *queryPage; //页面（1、搜索页，2、列表页）
@property (nonatomic, copy) NSString *sectionId; //区县ID

@property (nonatomic, copy) NSString *poiTypes; //本地生活传

@end
