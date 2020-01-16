//
//  RequestQueryNearTrainStations.h
//  CarBaDa
//
//  Created by 丁健 on 2018/8/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestQueryNearTrainStations : TCTRequestObject
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lon;
@end
