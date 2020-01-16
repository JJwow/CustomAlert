//
//  ResponseTrainProjectRecommend.h
//  CarBaDa
//
//  Created by zhaitong on 2017/9/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface projectInfos : NSObject
@property (nonatomic, copy) NSString *projectType;//项目类型ID（目前是接送站、酒店）
@end
@interface hotelList : NSObject
@property (nonatomic, copy) NSString *cmtLabel;//点评语意标签
@property (nonatomic, copy) NSString *cmtScore;//评分
@property (nonatomic, copy) NSString *cmtScorems;//评分描述
@property (nonatomic, copy) NSString *distance;//距离
@property (nonatomic, copy) NSString *hotelId;//酒店ID
@property (nonatomic, copy) NSString *hotelImage;//酒店图片地址
@property (nonatomic, copy) NSString *hotelName;//酒店名称
@property (nonatomic, copy) NSString *lowestPrice;//最小价格
@end

@interface nearbyList : NSObject
@property (nonatomic, copy) NSString *projectType;//项目类型
@property (nonatomic, copy) NSArray *hotelList;//酒店列表
@property (nonatomic, copy) NSString *link;//跳转地址
@property (nonatomic, copy) NSString *type;//附近类型（1、到达站 2、出发站）
@property (nonatomic, copy) NSString *title;//标题
@end

@interface ResponseTrainProjectRecommend : NSObject
@property (nonatomic, copy) NSArray *projectInfos;
@property (nonatomic, copy) NSArray *nearbyList;
@end
