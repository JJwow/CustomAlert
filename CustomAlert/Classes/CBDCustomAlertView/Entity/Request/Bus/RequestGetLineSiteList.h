//
//  RequestGetLineSiteList.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetLineSiteList : TCTRequestObject

@property (nonatomic, copy) NSString *departure;//出发地

@property (nonatomic, copy) NSString *dptStation;//出发站点

@property (nonatomic, copy) NSString *destination;//到达地

@property (nonatomic, copy) NSString *destStation;//到达站点

@property (nonatomic, copy) NSString *displayDestStation;//到达站点外显名称

@property (nonatomic, copy) NSString *supplierKey;//供应商key

@property (nonatomic, copy) NSString *coachNo;//车次号

@property (nonatomic, copy) NSString *coachType;//车型

@end

NS_ASSUME_NONNULL_END
