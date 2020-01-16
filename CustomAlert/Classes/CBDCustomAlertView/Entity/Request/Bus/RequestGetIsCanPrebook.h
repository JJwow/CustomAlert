//
//  RequestGetIsCanPrebook.h
//  CarBaDa
//
//  Created by fly on 2018/11/26.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

#import "Requestcreatebusorder.h"

@interface RequestGetIsCanPrebook : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;//会员ID

@property (nonatomic, copy)NSString *supplierKey;//供应商key

@property (nonatomic, copy)NSString *departure;//出发城市

@property (nonatomic, copy)NSString *dptTime;//发车时间

@property (nonatomic, strong)NSArray *passengersInfo;//乘客信息

@end
