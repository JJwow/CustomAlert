//
//  ResponseGetEntranceStatus.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/13.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetEntranceStatus : NSObject

@property(nonatomic, copy) NSString *isNight;//是否夜间单 --1是，0否  不是夜间单就会显示12306入口
@property(nonatomic, copy) NSString *ticketModel;//购票模式--1自购（12306购票），0 代购（巴管购票）

@end
