//
//  RequestGrabTicketGetStartTime.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/3/30.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGrabTicketGetStartTime : TCTRequestObject
@property (nonatomic, copy) NSString *fromTime;
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *trainNo;

@end
