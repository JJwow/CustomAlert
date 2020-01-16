//
//  RequestIsCanChangeTicket.h
//  CarBaDa
//
//  Created by 丁健 on 16/9/1.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestIsCanChangeTicket : TCTRequestObject
@property (nonatomic, copy) NSString *fromTime;//发车时间
@property (nonatomic, copy) NSString *freshTicketPrice;//新票价
@property (nonatomic, copy) NSString *oldTicketPrice;//原票价
@property (nonatomic, copy) NSString *passengerId;//乘客ID
@property (nonatomic, copy) NSString *serialId;//订单流水号
@property (nonatomic, copy) NSString *freshSeatType;//新座位类型
@end
