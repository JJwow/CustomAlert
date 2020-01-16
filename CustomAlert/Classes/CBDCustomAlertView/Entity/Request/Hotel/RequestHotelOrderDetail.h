//
//  RequestHotelOrderDetail.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/11/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestHotelOrderDetail : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderId;
@property (nonatomic, copy) NSString *orderSerialId;

@end
