//
//  RequestVertifyPassenger.h
//  CarBaDa
//
//  Created by zhaitong on 2017/6/8.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
@interface passengers : NSObject
@property (nonatomic, copy) NSString *cardNo;//证件号
@property (nonatomic, copy) NSString *cardType;//证件类型
@property (nonatomic, copy) NSString *passengerName;//乘客姓名
@property (nonatomic, copy) NSString *passengerType;//乘客类型

#pragma mark --- 机票下单需要
@property (nonatomic, copy) NSString *gender;//性别（1：男 2：女）
@property (nonatomic, copy) NSString *birthday;//生日
@property (nonatomic, copy) NSString *name;//乘客姓名
@property (nonatomic, copy) NSString *cardNum;//证件号
@property (nonatomic, copy) NSString *mobile;//乘客手机号
@property (nonatomic, copy) NSString *passengerId;
@property (nonatomic, copy) NSString *ticketType;//票类型

- (passengers *)initWithName:(NSString*)name passengerType:(NSString*)passengerType cardType:(NSString *)cardType gender:(NSString *)gender birthday:(NSString *)birthday cardNum:(NSString*)cardNum mobile:(NSString *)mobile ticketType:(NSString *)ticketType;

@end

@interface RequestVertifyPassenger : TCTRequestObject
@property (nonatomic, strong) NSArray *passengers;
@property (nonatomic, copy) NSString *canDelivered;//是否可以送票上门
@end
