//
//  ResponseGetGrabTicketValidTime.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface validTimeList : NSObject
@property (nonatomic, copy) NSString *endDate;//抢票结束日期--2016-11-12
@property (nonatomic, copy) NSString *endTime;//抢票结束时间--16:48:05
@property (nonatomic, copy) NSString *sort;//显示排序
@property (nonatomic, copy) NSString *title;//抢票时段说明--抢3天
@property (nonatomic, copy) NSString *show;//选中后显示内容 --2016-11-12 16:48:05 抢3天
@property (nonatomic, copy) NSString *grabTime;//抢票时效（天）
@property (nonatomic, copy) NSString *value;//匹配选中标识 ThreeDay
@end

@interface ResponseGetGrabTicketValidTime : NSObject
@property (nonatomic, copy) NSString *currentTime;//服务器当前时间
@property (nonatomic, strong) NSArray *validTimeList;//可选时段列表
@property (nonatomic, copy) NSString *instr;//响应的描述

@end
