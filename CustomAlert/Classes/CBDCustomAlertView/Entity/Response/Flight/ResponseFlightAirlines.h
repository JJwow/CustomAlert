//
//  ResponseFlightAirlines.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/7/16.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface airlines : NSObject

@property (nonatomic, strong) NSString *airlineCode;//航司二字码
@property (nonatomic, strong) NSString *airlineName;//航司名称
@property (nonatomic, strong) NSString *airlineImgUrl;//航司icon

@end

@interface ResponseFlightAirlines : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *airlines;//航司列表
@property (nonatomic, strong) NSString *timestamp;//时间戳

@end

NS_ASSUME_NONNULL_END
