//
//  ResponseApplyFlightReceipt.h
//  CarBaDa
//
//  Created by zjb on 2019/4/29.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@class orderPayDetail;

@interface ResponseApplyFlightReceipt : NSObject

@property (nonatomic, strong) NSString *orderSerialId;//订单流水号

@property (nonatomic, strong) NSString *mailSerialId;//邮寄单流水号

@property (nonatomic, strong) NSString *payExpireDate;//支付失效时间（yyyy-MM-dd HH:mm:ss）
@property (nonatomic, strong) NSString *payAmount;//支付金额

@property (nonatomic, strong) NSMutableArray *payDetail;//支付信息

@end

