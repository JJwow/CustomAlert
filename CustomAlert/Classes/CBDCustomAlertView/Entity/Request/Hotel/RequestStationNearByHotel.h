//
//  RequestStationNearByHotel.h
//  CarBaDa
//
//  Created by 丁健 on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestStationNearByHotel : TCTRequestObject
@property (nonatomic, copy) NSString *cityId;//城市ID
@property (nonatomic, copy) NSString *sectionId;///城市ID
@property (nonatomic, copy) NSString *requestType;//requestType 0.医院 1.大学周边 2.展会 3.景点 4.地铁 5.机场车站 6.商业区 8.酒店
@end
