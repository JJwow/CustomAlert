//
//  Responsegetpresaleperiod.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/20.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetPreSalePeriod : NSObject

@property (nonatomic,copy) NSString *saleDays;
@property (nonatomic, strong) NSArray *grabDays;
@property (nonatomic,copy) NSString *notice;//公告 -V480

@property (nonatomic, copy) NSString *studentTicketStart;//学生票起始时间
@property (nonatomic, copy) NSString *studentTicketSaleDays;//学生票销售天数
@property (nonatomic, copy) NSString *studentTicketNote;//学生票公告(只在大首页用一下)

@property (nonatomic, copy) NSString *customizeSeatStartDate;//在线选座起始日期
@property (nonatomic, copy) NSString *customizeSeatSaleDays;//在线选座预售天数
@property (nonatomic, copy) NSString *transferSaleDays;//联乘车次预售期天数
@property (nonatomic, copy) NSString *alternativeDays;//备选日期天数
@end
