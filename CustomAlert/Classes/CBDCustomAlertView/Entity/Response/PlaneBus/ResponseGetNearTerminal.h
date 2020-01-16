//
//  ResponseGetNearTerminal.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/4.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseGetAirportTerminal.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetNearTerminal : TCTResponseObject

@property (nonatomic, copy) NSMutableArray *terminalList;//航站楼列表

@end

NS_ASSUME_NONNULL_END


@interface terminalList : airportList

@property (nonatomic, copy) NSString *cityName;//城市名

@end
