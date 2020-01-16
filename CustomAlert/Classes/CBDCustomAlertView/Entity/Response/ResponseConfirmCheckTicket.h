//
//  ResponseConfirmCheckTicket.h
//  CarBaDa
//
//  Created by zhaitong on 16/8/31.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainOrderInfo.h"
@interface ResponseConfirmCheckTicket : NSObject
@property (nonatomic, copy) NSString *fromDate;//发车日期
@property (nonatomic, copy) NSString *fromStationName;//发车站名称
@property (nonatomic, copy) NSString *fromTime;//发车时间
@property (nonatomic, copy) NSString *isSuccess;
@property (nonatomic, copy) NSString *orderId;//订单ID
@property (nonatomic, strong) NSArray *passenger;//乘客实体
@property (nonatomic, copy) NSString *runTimeSpan;//运行时间
@property (nonatomic, copy) NSString *seatName;//座位名字
@property (nonatomic, copy) NSString *seatType;//座位类型
@property (nonatomic, copy) NSString *ticketPrice;//车票价格
@property (nonatomic, copy) NSString *toDate;//到达日期
@property (nonatomic, copy) NSString *toStationName;//到达站名称
@property (nonatomic, copy) NSString *toTime;//到达时间
@property (nonatomic, copy) NSString *trainNo;//车次
@end
