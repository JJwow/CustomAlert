//
//  ResponseResortsOrderInfo.h
//  CarBaDa
//
//  Created by zhaitong on 16/7/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseResortsOrderInfo : NSObject
@property (nonatomic, copy) NSString *guestMobile;//游玩人电话
@property (nonatomic, copy) NSString *guestName;//游玩人
@property (nonatomic, copy) NSString *orderStatus;//订单状态
@property (nonatomic, copy) NSString *payStatus;//支付方式(现场支付/线上支付)
@property (nonatomic, copy) NSString *sceneryAddress;//景点地址
@property (nonatomic, copy) NSString *sceneryName;//景点名称
@property (nonatomic, copy) NSString *ticketAmount;//总票价
@property (nonatomic, copy) NSString *ticketPrice;//票价
@property (nonatomic, copy) NSString *ticketQuantity;//票数
@property (nonatomic, copy) NSString *travelDate;//旅游时间
@end
