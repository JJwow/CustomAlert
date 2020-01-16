//
//  ResponseGetTrainNo.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/24.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrain.h"
//12306购票按钮
@interface otButton : NSObject

@property (nonatomic,strong) NSString *isEnable;//0不可以 1可以
@property (nonatomic,strong) NSString *showMsg;//展示文字

@end

//巴管购票按钮
@interface bgButton : NSObject

@property (nonatomic,strong) NSString *isEnable;//0不可以 1可以
@property (nonatomic,strong) NSString *showMsg;//展示文字
@end

//送票上门按钮
@interface deliButton : NSObject

@property (nonatomic,strong) NSString *isEnable;//0不可以 1可以
@property (nonatomic,strong) NSString *showMsg;//展示文字

@end

@interface ResponseGetTrainNo : NSObject
@property (nonatomic,strong) NSString *bookState;//是否可预订 0否1是2票已售空
@property (nonatomic,strong) NSString *endStation;//终点站
@property (nonatomic,strong) NSString *endStationCode;//终点站拼音
@property (nonatomic,strong) NSString *fromPassType;//0始发站1经停站2终点站
@property (nonatomic,strong) NSString *fromStation;//发车站
@property (nonatomic,strong) NSString *fromStationCode;//发车站拼音
@property (nonatomic,strong) NSString *departureTime;//出发日期（详细）
@property (nonatomic,strong) NSString *fromDate;//发车日期
@property (nonatomic,strong) NSString *fromTime;//发车时间
@property (nonatomic,strong) NSString *miles;//公里数
@property (nonatomic,strong) NSString *note;//备注
@property (nonatomic,strong) NSString *nightNote;//夜间提示
@property (nonatomic,strong) NSString *pullInByIdCard;//是否可刷身份证进站	0否1是
@property (nonatomic,strong) NSString *runTimeSpan;//历经时间
@property (nonatomic,strong) NSString *startStationCode;//始发站拼音
@property (nonatomic,strong) NSString *startStation;//始发站

@property (nonatomic,strong) NSArray *tickets;//票

@property (nonatomic,strong) NSString *toPassType;//0始发站1经停站2终点站
@property (nonatomic,strong) NSString *toStation;//到达站
@property (nonatomic,strong) NSString *toStationCode;//到达站拼音
@property (nonatomic,strong) NSString *toDate;//到达日期
@property (nonatomic,strong) NSString *toTime;//到达时间
@property (nonatomic,strong) NSString *trainClass;//车次类型
@property (nonatomic,strong) NSString *trainNo;//车次号
@property (nonatomic,strong) NSString *queryKey;
@property (nonatomic,strong) bgButton *bgButton;//巴管购票按钮
@property (nonatomic,strong) otButton *otButton;//12306购票按钮
@property (nonatomic,strong) deliButton *deliButton;//送票上门按钮

@end
