//
//  RequestGetTimeInventory.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetTimeInventory : TCTRequestObject

@property (nonatomic, copy) NSString *areaId;//库存模式区域id

@property (nonatomic, copy) NSString *lineId;//线路id

@property (nonatomic, copy) NSString *useDate;//用车日期

@end

NS_ASSUME_NONNULL_END
