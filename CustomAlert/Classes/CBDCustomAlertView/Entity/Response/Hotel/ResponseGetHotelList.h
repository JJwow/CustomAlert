//
//  ResponseGethotellist.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/14.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "PageInfo.h"

@class themes,poiList,filterInfoList,sortFilter,recommends,topFilter,baseFilter;
@interface ResponseGetHotelList : TCTResponseObject

@property (nonatomic, copy) NSString *labelName;//地标名称
@property (nonatomic,strong) pageInfo *pageInfo;

@property (nonatomic, strong) NSMutableArray *HotelList;//酒店列表
@property (nonatomic, strong) sortFilter *sortFilter;
@property (nonatomic, strong) NSArray *baseFilter;
@property (nonatomic, strong) NSArray *topFilter;

@end

@interface sortFilter : NSObject
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *ifRadio;
@property (nonatomic, strong) NSMutableArray *filterInfoList;

@end


@interface HotelList : NSObject

@property (nonatomic, copy) NSString *businessId;//商业ID
@property (nonatomic, copy) NSString *businessName;//商业名称
@property (nonatomic, copy) NSString *classId;//酒店星级id
@property (nonatomic, copy) NSString *className;//酒店星级
@property (nonatomic, copy) NSString *distance;//距离（米）
@property (nonatomic, copy) NSString *hotelId;//酒店Id
@property (nonatomic, copy) NSString *hotelImage;//酒店图片
@property (nonatomic, copy) NSString *hotelName;//酒店名称
@property (nonatomic, copy) NSString *lowestPrice;//酒店最小价
@property (nonatomic, copy) NSString *fullRoom;//酒店预定状态 0 未满房 1 满房

@property (nonatomic, copy) NSString *hot;//是否人气酒店


@property (nonatomic, copy) NSString *lat;//维度
@property (nonatomic, copy) NSString *lon;//经度

@property (nonatomic, copy) NSString *ttrade;//是否商旅酒店

@property (nonatomic, strong)NSArray *themes;

@property (nonatomic, copy) NSString *cmtScore;//评分
@property (nonatomic, copy) NSString *cmtScorems;//评分描述
@property (nonatomic, copy) NSString *cmtLabel;//语意标签
@property (nonatomic, copy) NSString *cmtNum;//点评总数
@property (nonatomic, copy) NSString *cityName;//城市名称

@property (nonatomic, strong) recommends *recommends;

@end

@interface themes : NSObject

@property (nonatomic, copy) NSString *typeName;//主题名称
@property (nonatomic, copy) NSString *frameColor;//外框颜色
@property (nonatomic, copy) NSString *fontColor;//字体颜色
@property (nonatomic, copy) NSString *backgroundColor;//背景色

@end

@interface recommends : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *categoryId;

@property (nonatomic, copy) NSArray *poiList;

@end
