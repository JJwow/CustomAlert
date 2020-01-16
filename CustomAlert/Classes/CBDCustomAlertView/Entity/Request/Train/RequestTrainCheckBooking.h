//
//  RequestTrainCheckBooking.h
//  CarBaDa
//
//  Created by 丁健 on 2019/2/27.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestTrainCheckBooking : TCTRequestObject
@property (nonatomic, copy) NSString *fromStation;
@property (nonatomic, copy) NSString *toStation;
@property (nonatomic, copy) NSString *trainDate;
@property (nonatomic, copy) NSString *trainNo;
@property (nonatomic, copy) NSString *seatType;//坐席类型
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *wayType;//1、12306,2、优享预订，3、快递送票，4抢购预订，5抢票
@end

NS_ASSUME_NONNULL_END
