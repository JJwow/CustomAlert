//
//  RequestGetRefundRule.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetRefundRule : TCTRequestObject

@property (nonatomic, copy) NSString *dptProvince;//出发地的省份

@property (nonatomic, copy) NSString *supplierKey;//供应商key

@end

NS_ASSUME_NONNULL_END
