//
//  RequestGrabTicketGetTrains.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGrabTicketGetTrains : TCTRequestObject
@property (nonatomic, copy) NSArray *filterTrainNo;//过滤车次列表
@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *pageIndex;
@property (nonatomic, copy) NSString *pageSize;
@property (nonatomic, copy) NSString *toStation;//	到达站
@property (nonatomic, copy) NSString *trainDate;//发车日期

@end
