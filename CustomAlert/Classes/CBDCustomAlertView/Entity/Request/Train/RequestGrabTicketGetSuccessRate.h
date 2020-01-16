//
//  RequestGrabTicketGetSuccessRate.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGrabTicketGetSuccessRate : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员ID-V370
@property (nonatomic, copy) NSString *acceleratorPackCount;//加速包数量
@property (nonatomic, copy) NSString *closeTime;//抢票截止时间
@property (nonatomic, copy) NSString *passengerCount;//乘客数
@property (nonatomic, copy) NSString *seatCount;//坐席数量
@property (nonatomic, copy) NSString *startTime;//抢票开始时间
@property (nonatomic, copy) NSString *trainCount;//车次数量
@property (nonatomic, copy) NSString *trainDate;//发车日期

@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *queryKey;//查询key
@property (nonatomic, copy) NSString *seatClass;//主坐席
@property (nonatomic, copy) NSString *toStation;//    到达站
@property (nonatomic, copy) NSString *trainNo;//主车次
@property (nonatomic, copy) NSString *alternativeDays;//备选日期个数
@property (nonatomic, copy) NSString *vipCardSpeedpackageCount;//会员权益赠送加速包个数 V460
@end

