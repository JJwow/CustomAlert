//
//  RequestGetPostFee.h
//  CarBaDa
//
//  Created by 丁健 on 2017/3/30.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPostFee : TCTRequestObject
@property (nonatomic, copy) NSString *city;//目的地市
@property (nonatomic, copy) NSString *departureTime;//出发时间	yyyy-MM-dd HH:mm
@property (nonatomic, copy) NSString *district;//目的地区
@property (nonatomic, copy) NSString *fromStationName;//出发站名称
@property (nonatomic, copy) NSString *province;//目的地省
@property (nonatomic, copy) NSString *trainNo;//车次号
@end

