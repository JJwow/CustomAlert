//
//  RequestGetHotelLinkByOrder.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/9/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetHotelLinkByOrder : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *projectType;
@end
