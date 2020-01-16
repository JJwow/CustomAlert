//
//  ResponseGetDestination.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/8/2.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetDestination : TCTResponseObject

@property(nonatomic, strong) NSArray *destinations;

@end


@interface destinations : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *areaName;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, copy) NSString *filterId;
@property (nonatomic, copy) NSString *cityId;
@property (nonatomic, copy) NSString *districtId;
@property (nonatomic, copy) NSString *address;

@property (nonatomic, copy) NSString *filterTypeEnName;
@property (nonatomic, copy) NSString *filterTypeName;


@end
