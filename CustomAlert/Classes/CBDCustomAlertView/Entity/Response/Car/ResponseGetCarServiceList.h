//
//  ResponseGetCarServiceList.h
//  CarBaDa
//
//  Created by Zayn on 15/6/23.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetCarServiceList : TCTResponseObject
@property (nonatomic, strong) NSArray *carServiceList;
@property (nonatomic, copy) NSString *estimateKilo;
@property (nonatomic, copy) NSString *estimateTime;
@end

@interface carServiceList : NSObject
@property (nonatomic, copy) NSString *hasDriver;
@property (nonatomic, copy) NSString *hasInsurance;
@property (nonatomic, copy) NSString *hasOil;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *personNumber;
@property (nonatomic, copy) NSString *picture;
@property (nonatomic, strong) NSArray *supplierList;
@end

@interface supplierList : NSObject
@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *airportFee;
@property (nonatomic, copy) NSString *brand;
@property (nonatomic, copy) NSString *carTypeId;
@property (nonatomic, copy) NSString *distance;
@property (nonatomic, copy) NSString *estimateFee;
@property (nonatomic, copy) NSString *estimateKiloFee;
@property (nonatomic, copy) NSString *estimateTimeFee;
@property (nonatomic, copy) NSString *extraDistanceFee;
@property (nonatomic, copy) NSString *extraTimeFee;
@property (nonatomic, copy) NSString *fee;
@property (nonatomic, copy) NSString *kongshiFee;
@property (nonatomic, copy) NSString *minFee;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nightFee;
@property (nonatomic, copy) NSString *perHourFee;//这里传的是每分钟单价, 接口命名有误
@property (nonatomic, copy) NSString *perKilometerFee;
@property (nonatomic, copy) NSString *picture;
@property (nonatomic, copy) NSString *startingFee;
@property (nonatomic, copy) NSString *timeLength;
@end