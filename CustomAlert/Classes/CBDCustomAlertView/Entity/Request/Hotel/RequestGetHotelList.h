//
//  RequestGetHotelList.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/2/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetHotelList : TCTRequestObject

@property (nonatomic, copy) NSString *cityId;//城市ID
@property (nonatomic, copy) NSString *classId;//星级（多选）
@property (nonatomic, copy) NSString *lat;//维度
@property (nonatomic, copy) NSString *lon;//经度
@property (nonatomic, copy) NSString *coordinateType;//经维度类型

@property (nonatomic, copy) NSString *pageIndex;//页码
@property (nonatomic, copy) NSString *pageSize;
@property (nonatomic, copy) NSString *sort;
@property (nonatomic, copy) NSString *keywords;//关键字
@property (nonatomic, copy) NSString *localCityId;//定位城市Id

@property (nonatomic, copy) NSString *reqFrom;//请求来源（1、酒店列表页，2、酒店详情页—酒店附近酒店，3、我收藏和我看过的酒店，4、火车票订单推荐附近酒店）


@property (nonatomic, copy) NSString *poiId;//标签ID
@property (nonatomic, copy) NSString *poiTypeId;//类型ID
@property (nonatomic, copy) NSString *priceMax;//价格范围最大范围
@property (nonatomic, copy) NSString *priceMin;//价格范围起始(最小价大于等于500表示500以上)
@property (nonatomic, copy) NSString *sectionId;//县级ID
@property (nonatomic, copy) NSString *sndDate;//离店日期
@property (nonatomic, copy) NSString *startDate;//入住日期

@property (nonatomic, strong) NSArray *filterList;//筛选条件

@property (nonatomic, strong) NSString *removeIds;//酒店ID，英文逗号隔开，最多可以传入10个

@end
