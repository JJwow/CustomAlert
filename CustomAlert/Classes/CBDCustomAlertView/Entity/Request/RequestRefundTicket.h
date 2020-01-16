//
//  RequestRefundTicket.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestRefundTicket : TCTRequestObject
@property (nonatomic, copy) NSString *passengerId;
@property (nonatomic, copy) NSString *serialId;
@end
