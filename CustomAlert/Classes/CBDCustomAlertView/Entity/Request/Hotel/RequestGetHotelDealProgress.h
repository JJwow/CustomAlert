//
//  RequestGetHotelDealProgress.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/4.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetHotelDealProgress : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员Id
@property (nonatomic, copy) NSString *serialId;//订单流水号
@end
