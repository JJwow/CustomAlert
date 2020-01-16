//
//  ResponseGetHotelLinkByOrder.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/9/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface orederNearbyList : NSObject
@property (nonatomic, copy) NSString *appLink;//跳转地址
@property (nonatomic, copy) NSString *type;//附近类型（1、到达站 2、出发站）
@end

@interface ResponseGetHotelLinkByOrder : NSObject
@property (nonatomic, copy) NSArray *orederNearbyList;//附近的酒店

@end
