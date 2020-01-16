//
//  RequestGetBusDestinations.h
//  CarBaDa
//
//  Created by Alex on 6/16/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusDestinations : TCTRequestObject
@property (nonatomic,copy) NSString *departure;//出发城市
@property (nonatomic,copy) NSString *version;//城市版本号
@end
