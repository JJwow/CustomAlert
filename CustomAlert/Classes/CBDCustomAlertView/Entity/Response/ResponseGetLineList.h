//
//  ResponseGetLineList.h
//  CarBaDa
//
//  Created by admin on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetLineList : NSObject

@property(nonatomic, strong)NSArray *lines;//线路信息

@end

@interface lines : NSObject

@property(nonatomic,strong)NSString *lineName;//线路名称
@property(nonatomic,strong)NSString *lineId;//线路id
@property(nonatomic,strong)NSString *price;//价格
@property(nonatomic,strong)NSString *mapUrl;//地图
@property(nonatomic,strong)NSArray *points;//站点

@end

@interface points : NSObject

@property(nonatomic,strong)NSString *lineId;
@property(nonatomic,strong)NSString *name;//站点名称
@property(nonatomic,strong)NSString *aliasName;//站点别名
@property(nonatomic,strong)NSString *pointId;
@property(nonatomic,strong)NSString *address;//地址
@property(nonatomic,strong)NSString *pointSource;//站点来源    0 老系统  1 新系统
@property(nonatomic,strong)NSString *thumbUrl;//图片
@property(nonatomic,strong)NSString *type;//0 上车点 1下车点
@property(nonatomic,strong)NSString *intervals;//距首站时间
@property(nonatomic,strong)NSString *inStation;//是否站内
@property(nonatomic,strong)NSString *startOrStop;//	0 普通点 1 起点站 2 终点站
@property(nonatomic,strong)NSString *sortIndex;//排序

@property(nonatomic,copy)NSString *pointName;//站点名称
@property(nonatomic,copy)NSString *pointType;//站点类型    0 上车点；1下车点
@property(nonatomic,copy)NSString *gdLat;//    站点纬度（高德）
@property(nonatomic,copy)NSString *gdLng;// 站点经度（高德）
@property(nonatomic,copy)NSString *nearPoint;//最近点    0 否 ； 1 是
@property(nonatomic,copy)NSString *isHome;//是否上门接送
@property(nonatomic,copy)NSString *inRange;//是否在范围内
@property (nonatomic, copy) NSString *isLocalSelected;//非接口给（是否选中）
@end

