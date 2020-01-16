//
//  RequestGetNearTerminal.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/4.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetNearTerminal : TCTRequestObject

@property (nonatomic, copy) NSString *gdLng;//用户经度（高德）
@property (nonatomic, copy) NSString *gdLat;//用户纬度（高德）
@property (nonatomic, copy) NSString *lng;//用户经度（百度）
@property (nonatomic, copy) NSString *lat;//用户纬度（百度）

@end

NS_ASSUME_NONNULL_END
