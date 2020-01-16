//
//  RequestHotelApiOrderDetail.h
//  CarBaDa
//
//  Created by 丁健 on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestHotelApiOrderDetail : TCTRequestObject
@property (nonatomic, copy) NSString *memberId; //会员ID
@property (nonatomic, copy) NSString *orderSerialId; //订单ID
@end
