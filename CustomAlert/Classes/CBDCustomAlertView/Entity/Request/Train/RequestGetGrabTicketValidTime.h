//
//  RequestGetGrabTicketValidTime.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetGrabTicketValidTime : TCTRequestObject
@property (nonatomic, strong) NSString *trainNo;
@property (nonatomic, strong) NSString *fromTime;
@property (nonatomic, strong) NSString *queryKey;
@end
