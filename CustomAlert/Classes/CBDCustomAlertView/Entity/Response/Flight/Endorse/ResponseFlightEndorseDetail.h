//
//  ResponseFlightEndorseDetail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/11.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseFlightDetail.h"
#import "ResponseFlightRefundProgress.h"

@class flight,payDetail;

NS_ASSUME_NONNULL_BEGIN

//@interface flightPayDetail : NSObject
//
//@end

@interface endorseTracks : refundTrackItems

@end

@interface ResponseFlightEndorseDetail : TCTResponseObject

@property (nonatomic, strong) NSString *serialId;//0 未支付， 1 已支付
@property (nonatomic, strong) NSString *orderState;//改签状态 0 未改签 1 改签成功 2 改签失败 3 改签中
@property (nonatomic, strong) NSString *orderStateDesc;
@property (nonatomic, strong) NSString *changeAmount;
@property (nonatomic, strong) NSString *createTime;

@property (nonatomic, strong) flight *flight;
@property (nonatomic, strong) NSMutableArray *payDetail;

@property (nonatomic, strong) NSString *payExpireDate;
@property (nonatomic, strong) NSString *payState;
@property (nonatomic, strong) NSString *payType;

@property (nonatomic, strong) NSString *payTypeDesc;

@property (nonatomic, strong) NSMutableArray *endorseTracks;


@end

NS_ASSUME_NONNULL_END
