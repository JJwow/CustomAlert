//
//  RequestTicketChangeVerify.h
//  CarBaDa
//
//  Created by zhaitong on 16/8/31.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTicketChangeVerify : TCTRequestObject
@property (nonatomic, copy) NSString *passengerid;//乘客ID
@property (nonatomic, copy) NSString *serialId;//订单流水号
@end
