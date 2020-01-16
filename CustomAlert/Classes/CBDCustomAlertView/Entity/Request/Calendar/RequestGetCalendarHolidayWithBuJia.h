//
//  RequestGetHolidayCalendar.h
//  TCTravel_IPhone
//
//  Created by Jacob Yang on 9/1/14.
//
//

#import "TCTNetworkEngine.h"

@interface RequestGetCalendarHolidayWithBuJia : TCTRequestObject
+ (void)requestWithSuccessBlock:(TCTRequestSuccessBlock)success
                   failureBlock:(TCTRequestFailBlock)failure;


@end
