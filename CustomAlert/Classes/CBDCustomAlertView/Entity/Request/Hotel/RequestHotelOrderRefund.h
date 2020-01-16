//
//  RequestHotelOrderRefund.h
//  CarBaDa
//
//  Created by 丁健 on 2017/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestHotelOrderRefund : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员Id
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@property (nonatomic, copy) NSString *cancelReason;
@end
