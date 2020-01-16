//
//  ResponseStationNearByHotel.h
//  CarBaDa
//
//  Created by 丁健 on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseStationNearByHotel : NSObject
@property (nonatomic, copy) NSArray *pOIList;

@end

@interface pOIList : NSObject

@property (nonatomic, copy) NSString *categoryId;//类型ID（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *categoryName;//类型名称（0:医院 1：高校 2：展会 3:热门景点 4:地铁线路 5:机场车站 6:商业区 7:行政区 8:热门 9:热门品牌）
@property (nonatomic, copy) NSString *iconUrl;//类型图片
@property (nonatomic, copy) NSString *sort;

@property (nonatomic, copy) NSArray *poiList;//POI信息列表 有第三级
@property (nonatomic, copy) NSArray *subPoiList;//POI信息列表

@property (nonatomic, copy) NSArray *pOIInfoList;

@end
