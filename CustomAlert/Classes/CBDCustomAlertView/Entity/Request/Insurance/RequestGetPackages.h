//
//  RequestGetPackages.h
//  CarBaDa
//
//  Created by Vic_Li on 16/9/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPackages : TCTRequestObject
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *ticketAmount;
@property (nonatomic, copy) NSString *dptDateTime;
@property (nonatomic, copy) NSString *isGrabTicket;
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *supplier;
@property (nonatomic, copy) NSString *cityId;


@end
