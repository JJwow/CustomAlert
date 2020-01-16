//
//  ResponseFlightRefundQuery.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@class flights;
@class flightInsuranceDetail;

@interface reasons : NSObject

@property (nonatomic, strong) NSString *reasonId;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *typeName;
@property (nonatomic, strong) NSString *reason;


@end

@interface refundPassengers : NSObject

@property (nonatomic, strong) NSString *passengerId;//乘客id
@property (nonatomic, strong) NSString *passengerType;//乘客类型
@property (nonatomic, strong) NSString *passengerName;//1乘客姓名
@property (nonatomic, strong) NSString *certificateNo;//证件号码
@property (nonatomic, strong) NSString *certificateType;//证件类型
@property (nonatomic, strong) NSString *passengerState;//乘客状态
@property (nonatomic, strong) NSString *passengerStateDesc;//乘客状态描述
@property (nonatomic, strong) NSString *eticketState;//客票状态//0：未使用 1，已使用
@property (nonatomic, strong) NSString *itineraryState;//行程单状态
@property (nonatomic, strong) NSString *refundFee;//退票手续费
@property (nonatomic, strong) NSString *tax;//燃油
@property (nonatomic, strong) NSString *fee;//基建燃油
@property (nonatomic, strong) NSString *ticketSystemPrice;//票面价
@property (nonatomic, strong) NSString *eticketNo;
@property (nonatomic, strong) NSString *ticketType;//票类型

@end


@interface ResponseFlightRefundQuery : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *reasons;
@property (nonatomic, strong) NSMutableArray *flights;
@property (nonatomic, strong) NSMutableArray *flightInsuranceDetail;

@property (nonatomic, strong) NSString *redpacketFee;//申请退票应扣除的红包费用
@property (nonatomic, strong) NSString *postAmount;//邮寄金额(当选择所有可退票乘客时退款)

@end

NS_ASSUME_NONNULL_END
