//
//  RequestGetUninvoicedOrder.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetUninvoicedOrder : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id

@end

NS_ASSUME_NONNULL_END
