//
//  ResponseGetGrabTicketSeats.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface seatlist : NSObject
@property (nonatomic, copy) NSString *seatCode;//座位类型
@property (nonatomic, copy) NSString *seatName;//座位名称
@property (nonatomic, copy) NSString *seatSort;//枚举排序号
@property (nonatomic, copy) NSString *ticketMaxPrice;//最高票价

@end

@interface ResponseGetGrabTicketSeats : NSObject
@property (nonatomic, strong)NSArray *seatlist;

@end
