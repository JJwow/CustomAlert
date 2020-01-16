//
//  ResponseQueryRecommendTrains.h
//  CarBaDa
//
//  Created by zhaitong on 2018/5/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseQueryRecommendTrains : NSObject
@property (nonatomic, copy) NSString *fromDate;//发车日期
@property (nonatomic, copy) NSString *fromStation;//发车站
@property (nonatomic, copy) NSString *fromStationCode;//发车站拼音
@property (nonatomic, copy) NSString *fromTime;//发车时间
@property (nonatomic, copy) NSString *price;//价格
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *seatCode;//坐席类型
@property (nonatomic, copy) NSString *seatName;//坐席名称
@property (nonatomic, copy) NSString *toDate;//到达日期
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic, copy) NSString *toStationCode;//到达站拼音
@property (nonatomic, copy) NSString *toTime;//到达时间
@property (nonatomic, copy) NSString *trainNo;//车次号
@property (nonatomic, copy) NSArray *tickets;//票价列表

@end
