//
//  ResponseGetUninvoicedOrder.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/12/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetorderlist.h"

NS_ASSUME_NONNULL_BEGIN


@interface ResponseGetUninvoicedOrder : NSObject

@property (nonatomic, strong) NSArray *orderList;//订单列表

@end

NS_ASSUME_NONNULL_END
