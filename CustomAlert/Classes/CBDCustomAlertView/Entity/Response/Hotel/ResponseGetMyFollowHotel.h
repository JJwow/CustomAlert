//
//  ResponseGetMyFollowHotel.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetHotelList.h"
@interface follows : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *HotelList;

@end

@interface ResponseGetMyFollowHotel : NSObject
@property (nonatomic, copy) NSArray *follows;

@end
