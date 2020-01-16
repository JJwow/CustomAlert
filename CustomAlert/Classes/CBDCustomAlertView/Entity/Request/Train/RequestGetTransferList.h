//
//  RequestGetTransferList.h
//  CarBaDa
//
//  Created by 丁健 on 2018/1/10.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTransferList : TCTRequestObject

@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *sortType;//排序类型    0:出发时间升序,1:出发时间降序 2:行程耗时升序 3:行程耗时降序 4价格升序
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic,copy) NSString *fromStationType;//出发站类型 1车站 2 城市        V410
@property (nonatomic,copy) NSString *toStationType;//到达站类型 1车站 2 城市        V410
@property (nonatomic, copy) NSString *trainDate;//发车日期    yyyy-MM-dd
@property (nonatomic,copy) NSArray *traincategoryList;//11车次类型；12发车时段；13到达时段；14出发车站；15到达车站；16中转站 17同站换乘 18换乘时间段
@property (nonatomic,copy) NSArray *transferStationCategoryList;//11车次类型；12发车时段；13到达时段；14出发车站；15到达车站；16中转站 17同站换乘 18换乘时间段

@end


