//
//  ResponseFlightchangeDetail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/13.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseSearchFlightlist.h"

NS_ASSUME_NONNULL_BEGIN

@interface oldFlight : flights

@end

@interface freshFlight : flights

@end

@interface ResponseFlightchangeDetail : TCTResponseObject

@property (nonatomic, strong) NSString *changeSerialId;//航变单流水号
@property (nonatomic, strong) NSString *changeType;//航变类型（1：航班提前，2：航班延误，3：航班取消，4：航班恢复，5：航班号变动，6：机场变动）
@property (nonatomic, strong) NSString *changeTypeDesc;//航变描述
@property (nonatomic, strong) NSString *dealState;//处理状态（0：未处理，1：已处理）
@property (nonatomic, strong) NSString *changeTypeRemark;//航变描述信息

@property (nonatomic, strong) oldFlight *oldFlight;//原航班信息
@property (nonatomic, strong) freshFlight *freshFlight;//新航班信息

@end

NS_ASSUME_NONNULL_END
