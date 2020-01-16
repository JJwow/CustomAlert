//
//  ResponseHotelOrderDetail.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/11/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface checkInPersons : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@end

@interface ResponseHotelOrderDetail : NSObject
@property (nonatomic, copy) NSString *hotelName;//酒店名称
@property (nonatomic, copy) NSString *hotelAddress;//酒店地址
@property (nonatomic, copy) NSString *roomType;//房型
@property (nonatomic, copy) NSString *roomCount;//房间数 default:0
@property (nonatomic, copy) NSString *dayCount;//入住天数 default:0
@property (nonatomic, copy) NSString *checkInTime;//入住时间
@property (nonatomic, copy) NSString *departureTime;//离店时间
@property (nonatomic, copy) NSString *latestArrTime;//最晚到店时间
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@property (nonatomic, copy) NSString *createTime;//创建时间
@property (nonatomic, copy) NSString *amount;//总额   default:0
@property (nonatomic, copy) NSString *paymentFlag;//支付方式
@property (nonatomic, copy) NSString *paymentFlagName;//支付方式名称
@property (nonatomic, copy) NSString *bookName;//预订人
@property (nonatomic, copy) NSString *bookMobile;//预订人手机号
@property (nonatomic, copy) NSArray *checkInPersons;//入住人（list）  default:NULL
@property (nonatomic, copy) NSString *payUrl;//支付链接
@property (nonatomic, copy) NSString *orderState;//订单状态code
@property (nonatomic, copy) NSString *orderStateName;//订单状态名
@property (nonatomic, copy) NSString *serviceNum;//客服电话

@end
