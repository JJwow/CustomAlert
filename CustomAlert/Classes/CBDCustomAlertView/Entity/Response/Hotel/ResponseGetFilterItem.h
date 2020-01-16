//
//  ResponseGetFilterItem.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/6/14.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@class filterGroupList,filterList,filterInfoList,topFilter,distanceFilter,chainFilter,unionFilterList,baseFilter,locationFilter;

@interface ResponseGetFilterItem : TCTResponseObject

@property (nonatomic, copy) NSString *isSuccess;

@property (nonatomic, strong) locationFilter *locationFilter;//位置区域
@property (nonatomic, strong) baseFilter *baseFilter;//筛选
@property (nonatomic, strong) topFilter *topFilter;//置顶筛选条件
@property (nonatomic, strong) distanceFilter *distanceFilter;//距离筛选条件
@property (nonatomic, strong) chainFilter *chainFilter;
@property (nonatomic, strong) unionFilterList *unionFilterList;

@end

@interface locationFilter : NSObject

@property (nonatomic, copy) NSString *groupName;//类型名称
@property (nonatomic, strong) NSArray *filterList;//类型ID

@end

@interface baseFilter : NSObject

@property (nonatomic, copy) NSString *groupName;//类型名称
@property (nonatomic, strong) NSArray *filterList;

////筛选项
//@property (nonatomic, copy) NSString *categoryId;//类型ID
//@property (nonatomic, copy) NSString *filterValue;

@end

@interface filterList : NSObject

@property (nonatomic, copy) NSString *categoryId;//类型ID
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSString *ifRadio;//类型是否单选

@property (nonatomic, strong) NSArray *filterInfoList;//类型ID

@property (nonatomic, copy) NSString *filterValue;//筛选值

- (instancetype)initWithfValue:(NSString*)fValue categoryId:(NSString*)cateId;

@end


@interface filterInfoList : NSObject

@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lon;
@property (nonatomic, copy) NSString *content;//显示内容
@property (nonatomic, copy) NSString *value;//值
@property (nonatomic, copy) NSString *ifSelected;//是否选中
@property (nonatomic, copy) NSArray *childItemRes;

@end

@interface childItemRes : NSObject

@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lon;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *ifSelected;

@end

@interface topFilter : NSObject

@property (nonatomic, copy) NSString *ifRadio;//类型是否单选
@property (nonatomic, copy) NSString *categoryId;//类型ID
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSArray *filterInfoList;//子类别列表

//筛选值
//@property (nonatomic, copy) NSString *filterValue;

@end

@interface distanceFilter : NSObject

@property (nonatomic, copy) NSString *ifRadio;//类型是否单选
@property (nonatomic, copy) NSString *categoryId;//类型ID
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSArray *filterInfoList;//子类别列表
@end

//品牌
@interface chainFilter : NSObject
@property (nonatomic, copy) NSString *ifRadio;//类型是否单选
@property (nonatomic, copy) NSString *categoryId;//类型ID
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSArray *chains;//子类别列表
@end


@interface chains : NSObject
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSArray *filterInfoList;//子类别列表
@end

//底价优选
@interface unionFilterList : NSObject

@property (nonatomic, copy) NSString *ifRadio;//类型是否单选
@property (nonatomic, copy) NSString *categoryId;//类型ID
@property (nonatomic, copy) NSString *categoryName;//类型名称
@property (nonatomic, copy) NSString *value;//选择值

@end
