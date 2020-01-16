//
//  ResponseGetPlaceCoordList.h
//  CarBaDa
//
//  Created by Zayn on 15/6/23.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"
#import "LocationManger.h"

@interface ResponseGetPlaceCoordList : NSObject
@property (strong, nonatomic) NSMutableArray *placeList;
@property (copy, nonatomic) NSString *total;
@property (strong, nonatomic) pageInfo *pageInfo;
@end

@interface placeCoord : NSObject
@property (copy, nonatomic) NSString *lng;
@property (copy, nonatomic) NSString *lat;
@end

@interface placeList : NSObject
@property (copy, nonatomic) NSString *placeAddress;
@property (copy, nonatomic) NSString *placeName;
@property (strong, nonatomic)placeCoord *placeCoord;
@property (copy, nonatomic) NSString *placeDistrict;
@property (copy, nonatomic) NSString *placeCity;
@property (copy, nonatomic) NSString *placeProvince;
@property (copy, nonatomic) NSString *carAddFee;//包车附加费
@property (copy, nonatomic) NSString *carPoolAddFee;//拼车附加费
///子POI列表
@property (nonatomic, strong) NSArray<AMapSubPOI *> *subPOIs;
@end

