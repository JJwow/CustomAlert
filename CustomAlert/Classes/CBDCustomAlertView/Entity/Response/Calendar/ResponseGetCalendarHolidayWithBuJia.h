//
//  ResponseGetHolidayCalendar.h
//  TCTravel_IPhone
//
//  Created by Jacob Yang on 9/1/14.
//
//

#import <Foundation/Foundation.h>
@interface holidayList : NSObject
<NSCoding>
@property (nonatomic, strong) NSString *holidayDate;
@property (nonatomic, strong) NSString *holidayName;
@property (nonatomic, strong) NSString *holidayType;
@property (nonatomic, strong) NSArray * restDays;
@end

@interface ResponseGetCalendarHolidayWithBuJia : NSObject
@property (nonatomic, strong) NSMutableArray *holidayList;

+(ResponseGetCalendarHolidayWithBuJia*)getInstance;
+(void)setInstance:(ResponseGetCalendarHolidayWithBuJia*)tempInstance;

@end
