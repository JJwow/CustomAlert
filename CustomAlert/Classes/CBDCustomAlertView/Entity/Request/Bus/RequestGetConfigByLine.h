//
//  RequestGetConfigByLine.h
//  CarBaDa
//
//  Created by zjb on 2017/3/6.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetConfigByLine : TCTRequestObject
@property (nonatomic,copy) NSString *departure;
@property (nonatomic,copy) NSString *destination;
@property (nonatomic,copy) NSString *dptTime;
@property (nonatomic,copy) NSString *dptStation;
@property (nonatomic,copy) NSString *destStation;
@property (nonatomic,copy) NSString *price;
@property (nonatomic, copy) NSString *supplierKey;
@property (nonatomic, copy) NSString *childPrice;
@property (nonatomic, copy) NSString *ticketFee;
@property (nonatomic, copy) NSString *lineType;
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *canBooking;
@property (nonatomic,strong) NSString *shiftType;//0-普通班次；1-加班班次
@end
