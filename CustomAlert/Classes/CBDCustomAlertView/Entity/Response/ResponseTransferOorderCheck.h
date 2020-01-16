//
//  ResponseTransferOorderCheck.h
//  CarBaDa
//
//  Created by likaikun on 2018/1/12.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseTransferOorderCheck : TCTResponseObject

@property (nonatomic, copy) NSString *note;//备注
@property (nonatomic, copy) NSString *bookState;//预订状态
@property (nonatomic, copy) NSString *show12306;//是否显示12306    0 否 1是
@property (nonatomic, copy) NSString *nightNote;//夜间提示
@property (nonatomic, copy) NSString *saleIconUrl;//优惠购票的图标
@property (nonatomic, copy) NSString *travalTimeNote;//中转时间预留不足提示
@end
