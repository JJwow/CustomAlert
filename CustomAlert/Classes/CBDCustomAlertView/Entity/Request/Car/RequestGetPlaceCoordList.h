//
//  RequestGetPlaceCoordList.h
//  CarBaDa
//
//  Created by Zayn on 15/6/23.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPlaceCoordList : TCTRequestObject
@property (copy, nonatomic) NSString *pageIndex;
@property (copy, nonatomic) NSString *pageSize;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *supplierCode;
@end
