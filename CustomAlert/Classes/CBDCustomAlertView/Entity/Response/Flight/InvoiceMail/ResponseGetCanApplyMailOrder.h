//
//  ResponseGetCanApplyMailOrder.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/11/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"


@class orderList;
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetCanApplyMailOrder : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *orderList;//航班信息

@end

NS_ASSUME_NONNULL_END
