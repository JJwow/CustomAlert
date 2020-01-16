//
//  RequestGetStationInfoList.h
//  CarBaDa
//
//  Created by zjb on 16/8/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface StationList : NSObject
@property (nonatomic,copy) NSString *stationName;

- (instancetype)initWithName:(NSString *)sName;
@end

@interface RequestGetStationInfoList : TCTRequestObject
@property (nonatomic,copy) NSString *currentLat;
@property (nonatomic,copy) NSString *currentLng;
@property (nonatomic,strong) NSArray *stationList;
@property (nonatomic,copy) NSString *cityName;
@end
