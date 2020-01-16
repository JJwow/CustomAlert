//
//  ResponseSearchFlightChangelist.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface flightChangeList : NSObject

@property (nonatomic, strong) NSString *changeSerialId;//航变单流水号
@property (nonatomic, strong) NSString *unionSerialId;//关联订单号(改签单是改签单号)
@property (nonatomic, strong) NSString *changeType;//延误类型
@property (nonatomic, strong) NSString *changeTypeDesc;//延误类型描述

@end

@interface ResponseSearchFlightChangelist : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *flightChangeList;//列表

@end

NS_ASSUME_NONNULL_END
