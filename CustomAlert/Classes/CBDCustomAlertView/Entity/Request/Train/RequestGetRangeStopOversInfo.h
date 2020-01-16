//
//  RequestGetRangeStopOversInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2017/12/4.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetRangeStopOversInfo : TCTRequestObject
@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *fromTime;//出发时间
@property (nonatomic, copy) NSString *runTimeSpan;//历经时间
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic, copy) NSString *trainDate;//发车日期    yyyy-MM-dd
@property (nonatomic, copy) NSString *trainNo;//车次号

@end
