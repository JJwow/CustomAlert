//
//  RequestIsCanOrder.h
//  CarBaDa
//
//  Created by admin on 16/5/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestIsCanOrder : TCTRequestObject

@property (nonatomic, copy) NSString *fromTime; //发车时间
@property (nonatomic, copy) NSString *bookType; //预定类型
@property (nonatomic, copy) NSString *isGrabTicket; //是否为抢票验证
@end
