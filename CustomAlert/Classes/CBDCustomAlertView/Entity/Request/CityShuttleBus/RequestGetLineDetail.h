//
//  RequestGetLineDetail.h
//  CarBaDa
//
//  Created by LZQ on 15/12/31.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
/**
 *  "body": {
 "LineId": "1",
 "Departure": "南京",
 "Destination":"杭州",
 "depDate":"2015-12-31"
 },
 */
/**
 *     "body": {
 "lineId": "1",
 "departure": "南京",
 "destination":"苏州",
 "depDate":"2016-01-05"
 },
 */
@interface RequestGetLineDetail : TCTRequestObject
@property(nonatomic, copy)NSString *lineId;
@property(nonatomic, copy)NSString *departure;
@property(nonatomic, copy)NSString *destination;
@property(nonatomic, copy)NSString *depDate;
@property(nonatomic, copy)NSString *projectType;

@end
