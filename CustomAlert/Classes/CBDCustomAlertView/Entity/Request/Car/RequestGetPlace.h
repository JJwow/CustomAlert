//
//  RequestGetPlace.h
//  CarBaDa
//
//  Created by Zayn on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPlace : TCTRequestObject
@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lng;
@end
