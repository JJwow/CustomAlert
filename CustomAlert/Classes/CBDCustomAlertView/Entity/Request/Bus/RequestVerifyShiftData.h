//
//  RequestVerifyShiftData.h
//  CarBaDa
//
//  Created by zjb on 2017/12/5.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestVerifyShiftData : TCTRequestObject
@property (nonatomic, copy)NSString *supplierKey;//供应商key
@property (nonatomic, copy)NSString *departure;//出发城市
@property (nonatomic, copy)NSString *destination;//到达城市
@property (nonatomic, copy)NSString *dptStation;//出发车站
@property (nonatomic, copy)NSString *arrStation;//到达车站
@property (nonatomic, copy)NSString *dptTime;//发车时间（日期+时间点）
@property (nonatomic, copy)NSString *coachType;//车型
@property (nonatomic, copy)NSString *coachNo;//车次
@property (nonatomic, copy)NSString *price;//单价
@property (nonatomic, copy)NSString *lineType;//单价
@end
