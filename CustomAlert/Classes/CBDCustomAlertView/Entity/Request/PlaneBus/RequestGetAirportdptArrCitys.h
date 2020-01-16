//
//  RequestGetAirportdptArrCitys.h
//  CarBaDa
//
//  Created by Jabir on 16/2/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetAirportdptArrCitys : TCTRequestObject
@property (nonatomic,copy)NSString *queryType;
@property (nonatomic,copy)NSString *lineType;
@property (nonatomic,copy)NSString *cityName;
@property (nonatomic,copy)NSString *siteName;
@property (nonatomic,copy)NSString *locationLat;
@property (nonatomic,copy)NSString *locationLng;

@end

