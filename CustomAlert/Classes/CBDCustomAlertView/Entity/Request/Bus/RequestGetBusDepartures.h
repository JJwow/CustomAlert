//
//  RequestGetBusDepartures.h
//  CarBaDa
//
//  Created by wyj on 5/26/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusDepartures : TCTRequestObject

@property (nonatomic,copy) NSString *queryType;
@property (nonatomic,copy) NSString *sourceId;
@property (nonatomic,copy) NSString *refId;
@property (nonatomic,copy) NSString *clientIp;
@property (nonatomic,copy) NSString *province;
@property (nonatomic,copy) NSString *version;//城市版本号
@end
