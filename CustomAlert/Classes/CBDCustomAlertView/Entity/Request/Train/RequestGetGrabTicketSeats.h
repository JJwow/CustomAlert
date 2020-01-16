//
//  RequestGetGrabTicketSeats.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetGrabTicketSeats : TCTRequestObject
@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic, copy) NSString *trainDate;//出发日期
@property (nonatomic, copy) NSString *trainNoStr;//	所选车次
@end
