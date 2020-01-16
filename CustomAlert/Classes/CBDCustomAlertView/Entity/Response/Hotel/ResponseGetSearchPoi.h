//
//  ResponseGetSearchPoi.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/20.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetSearchPoi : TCTResponseObject

@property (nonatomic, copy) NSString *isSuccess;//是否成功
@property (nonatomic, copy) NSArray *results;//POI信息类型列表

@end

@interface results : NSObject

@property (nonatomic, copy) NSString *categoryId;//类型ID（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *categoryName;//类型名称（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *iconUrl;//类型图片
@property (nonatomic, copy) NSString *sort;

@property (nonatomic, copy) NSArray *poiList;//POI信息列表 有第三级
@property (nonatomic, copy) NSArray *subPoiList;//POI信息列表

@property (nonatomic, copy) NSArray *pOIInfoList;

@end

@interface poiList : NSObject

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *value;

@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *ifSelected;
//@property (nonatomic, copy) NSString *categoryId;

@end

@interface subPoiList : NSObject

@property (nonatomic, copy) NSString *categoryId;//类型ID（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *categoryName;//类型名称（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *sort;

@property (nonatomic, copy) NSArray *poiList;//POI信息列表 有第三级

@end
