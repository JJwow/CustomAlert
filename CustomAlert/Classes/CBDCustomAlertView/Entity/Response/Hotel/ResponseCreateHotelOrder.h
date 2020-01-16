//
//  ResponseCreateHotelOrder.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@class orderPayDetail;
@interface ResponseCreateHotelOrder : NSObject
@property (nonatomic, copy) NSString *serialId;//订单号
@property (nonatomic, copy) NSString *bookingStyle;
@property (nonatomic, strong) NSString *serverTime;//服务器时间
@property (nonatomic, strong) NSString *payExpireDate;//支付失效时间

@property (nonatomic, strong) NSArray *orderPayDetail;//支付请求参数
@property (nonatomic, copy) NSString *repeatSerialId;//重复订单号
@property (nonatomic, copy) NSString *repeatMes;//重复订单描述信息

@property (nonatomic, copy) NSString *cancelTime;//最晚取消时间[新]
@property (nonatomic, copy) NSString *guaranteeAmount;//担保金额[新]
@property (nonatomic, copy) NSString *currencyCode;//货币类型[新]
@property (nonatomic, copy) NSString *isInstantConfirm;//是否是即时确认[新]


@end
