//
//  RequestBookValidate.h
//  CarBaDa
//
//  Created by zhaitong on 17/4/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestBookValidate : TCTRequestObject

@property (nonatomic, copy) NSString *resourceId;//酒店Id
@property (nonatomic, copy) NSString *roomTypeId;//房型编号id
@property (nonatomic, copy) NSString *productUniqueId;//政策id
@property (nonatomic, copy) NSString *comeDate;//入住日期
@property (nonatomic, copy) NSString *comeTime;//到店时间
@property (nonatomic, copy) NSString *leaveDate;//离店日期
@property (nonatomic, copy) NSString *bookingCount;//预订的房间数量
@property (nonatomic, copy) NSString *totalAmount;//订单总额

@property (nonatomic, copy) NSString *guestCount;//客人数量，目前取的与房间数一致
@property (nonatomic, copy) NSString *paymentType;//支付模式

@end
