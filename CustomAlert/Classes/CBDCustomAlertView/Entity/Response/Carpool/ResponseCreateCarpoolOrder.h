//
//  ResponseCreateCarpoolOrder.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseCreateCarpoolOrder : NSObject

@property (nonatomic, copy) NSString *isSuccess;//

@property (nonatomic, copy) NSString *orderId;//订单id

@property (nonatomic, strong) NSArray *carPoolOrderPayDetail;//收银台明细

@property (nonatomic, copy) NSString *orderSerialId;//流水号

@property (nonatomic, copy) NSString *payAmount;//支付金额

@property (nonatomic, copy) NSString *payExpireDate;//支付过期时间

@property (nonatomic, copy) NSString *serverTime;//服务器当前时间

@end

NS_ASSUME_NONNULL_END
