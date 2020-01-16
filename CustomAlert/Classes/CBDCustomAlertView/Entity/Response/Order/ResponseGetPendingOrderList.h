//
//  ResponseGetPendingOrderList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/6/1.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responsegetbusorderdetail.h"
@interface pendingOrderList : NSObject
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *departure;//出发城市
@property (nonatomic, strong) NSString *dptStation;//出发站点
@property (nonatomic, strong) NSString *destination;//到达城市
@property (nonatomic, strong) NSString *arrStation;//到达站点
@property (nonatomic, strong) NSString *dptDateTime;//发车时间，如果是流水班则是最早发车时间
@property (nonatomic, strong) NSString *endDateTime;//流水班次的最晚发车时间
@property (nonatomic, strong) NSString *ticketCheck;//检票口
@property (nonatomic, strong) NSString *seatNumber;//座位号
@property (nonatomic, strong) NSString *ticketCodeType;//生成码类型，0一维码 1二维码
@property (nonatomic, strong) NSArray *ticketImageFull;//一维码/二维码list
@property (nonatomic, strong) NSArray *ticketCodeList;//取票码list
@property (nonatomic, strong) NSString *isScrollCoach;//是否流水班次
@property (nonatomic, strong) NSString *displayArrStation;//到达显示名
@end


@interface ResponseGetPendingOrderList : NSObject
//@property (nonatomic, copy) NSString *enableBusPending;//是否关闭；数据字段code：EnableBusPending
@property (nonatomic, strong) NSArray *pendingOrderList;//列表

@end
