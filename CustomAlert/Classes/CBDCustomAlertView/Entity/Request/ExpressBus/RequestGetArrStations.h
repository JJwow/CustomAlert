//
//  RequestGetArrStations.h
//  CarBaDa
//
//  Created by 张嘉畀 on 2019/1/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetArrStations : TCTRequestObject
@property (nonatomic,copy) NSString *projectTyoe;//固定传9
@property (nonatomic,copy) NSString *departureCity;//出发城市
@property (nonatomic,copy) NSString *departureSite;//出发站点
@end

NS_ASSUME_NONNULL_END
