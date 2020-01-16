//
//  RequestGetbusschedule.h
//  CarBaDa
//
//  Created by Alex on 6/11/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseGetbusschedule.h"

@interface RequestGetbusschedule : TCTRequestObject
@property (nonatomic,strong) NSString *sourceId;                //扩展字段	固定传 “0”
@property (nonatomic,strong) NSString *departure;               //出发城市 “苏州”
@property (nonatomic,strong) NSString *destination;             //到达城市  “上海”
@property (nonatomic,strong) NSString *dptDate;                 //发车时间 “2015-05-25 15:32:22.333”
@property (nonatomic,strong) NSString *dptStation;              //出发站 “北广场站”
@property (nonatomic,strong) NSString *arrStation;             //到达车站  “北广场站”
@property (nonatomic,strong) NSString *sortType;                //排序：0:出发时间升序,1:出发时间降序 2:价格升序 3:价格降序
@property (nonatomic,strong) NSString *pageIndex;               //页码编号 从1 开始,默认1
@property (nonatomic,strong) NSString *pageSize;                //每页条数 , 默认10

@property (nonatomic,strong) NSArray *categoryList;
@property (nonatomic,strong) NSString *orderType;

@end
