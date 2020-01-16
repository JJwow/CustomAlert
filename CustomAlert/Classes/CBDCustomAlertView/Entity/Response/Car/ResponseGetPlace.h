//
//  ResponseGetPlace.h
//  CarBaDa
//
//  Created by Zayn on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetPlace : TCTResponseObject
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *business;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *district;
@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lng;
@property (nonatomic, copy) NSString *province;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *streetNo;
@end
