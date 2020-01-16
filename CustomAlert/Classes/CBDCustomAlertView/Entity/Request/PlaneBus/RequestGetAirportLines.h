//
//  RequestGetAirportLines.h
//  CarBaDa
//
//  Created by zjb on 16/3/29.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetAirportLines : TCTRequestObject
@property (nonatomic,copy) NSString *cityName;
@property (nonatomic,copy) NSString *airportName;
@property (nonatomic,copy) NSString *aliasName;
@property (nonatomic,copy) NSString *airportCityName;
@property (nonatomic,copy) NSString *dptDate;
@property (nonatomic,copy) NSString *serviceType;
@end
