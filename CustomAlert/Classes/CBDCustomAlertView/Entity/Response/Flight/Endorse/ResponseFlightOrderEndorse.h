//
//  ResponseFlightOrderEndorse.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@class payDetail;

NS_ASSUME_NONNULL_BEGIN

@interface ResponseFlightOrderEndorse : TCTResponseObject

@property (nonatomic, strong) NSString *serialId;//订单流水号
@property (nonatomic, strong) NSString *payExpireDate;//支付失效时间（yyyy-MM-dd HH:mm:ss）
@property (nonatomic, strong) NSString *payAmount;//支付金额

@property (nonatomic, strong) NSMutableArray *payDetail;//支付信息
@end

NS_ASSUME_NONNULL_END
