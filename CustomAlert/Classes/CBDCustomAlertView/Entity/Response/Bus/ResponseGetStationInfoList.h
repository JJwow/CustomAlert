//
//  ResponseGetStationInfoList.h
//  CarBaDa
//
//  Created by zjb on 16/8/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface stationDetailList : NSObject
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *address;
@property (nonatomic,strong) NSString *lng;
@property (nonatomic,strong) NSString *lat;
@property (nonatomic,strong) NSString *tel;
@property (nonatomic,strong) NSString *lineDistance;

@end

@interface ResponseGetStationInfoList : NSObject
@property (nonatomic,strong) NSArray *stationDetailList;
@end
