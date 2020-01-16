//
//  ResponseGetDepartStations.h
//  CarBaDa
//
//  Created by 张嘉畀 on 2019/1/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusDepartures.h"
#import "ResponseGetAirportTerminal.h"

NS_ASSUME_NONNULL_BEGIN

@interface siteItems : NSObject
@property (nonatomic,strong) NSString *siteName;//站点名称（站点别名）
@property (nonatomic,strong) NSString *cityId;//站点所属城市ID
@property (nonatomic,strong) NSString *cityName;//站点归属城市
@property (nonatomic,strong) NSString *provinceName;//站点归属省
@property (nonatomic,strong) NSString *siteType;//站点类型
@property (nonatomic,strong) NSString *siteTypeName;//站点类型名称

@end

@interface ResponseGetDepartStations : NSObject
@property (nonatomic,strong) NSMutableArray *prefixList;
@end

NS_ASSUME_NONNULL_END
