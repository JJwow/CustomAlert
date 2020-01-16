//
//  RequestGetTransferExpireTime.h
//  CarBaDa
//
//  Created by 丁健 on 2018/6/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface trainInfo : NSObject
@property (nonatomic, copy) NSString *trainTime;//
@end

@interface busInfo : NSObject
@property (nonatomic, copy) NSString *arrStation;//到达车站
@property (nonatomic, copy) NSString *coachNo;//车次
@property (nonatomic, copy) NSString *coachType;//车型
@property (nonatomic, copy) NSString *departure;//出发城市
@property (nonatomic, copy) NSString *destination;//到达城市
@property (nonatomic, copy) NSString *dptStation;//出发车站
@property (nonatomic, copy) NSString *dptTime;//发车时间(2017-12-10 16:10:00    )
@property (nonatomic, copy) NSString *lineType;//线路类型    (0：普通班次 1：流水班次 2：途经班次 3：推荐班次)    string
@property (nonatomic, copy) NSString *price;//单价
@property (nonatomic, copy) NSString *supplierKey;//供应商key
@end

@interface RequestGetTransferExpireTime : TCTRequestObject
@property (nonatomic, strong) trainInfo *trainInfo;
@property (nonatomic, strong) busInfo *busInfo;
@property (nonatomic, copy) NSString *type;//1:火车 2:汽车    string

@end
