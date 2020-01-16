//
//  ResponseGetBusCanReschuling.h
//  CarBaDa
//
//  Created by John on 2018/7/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetBusCanReschuling : NSObject
@property (nonatomic , strong) NSString *isChange;//是否可改签 0不可改签 1可改签
@property (nonatomic , strong) NSString *canNotChangeDesp;//不可改签的原因描述
@property (nonatomic , strong) NSString *ErrEnum;//0 订单改签失败 1该订单已部分退票 2该订单正在退票 3该订单已退票 4该订单正在改签中 5该订单已改签 6小于发车前XX分钟 7该订单已申请部分退票 8该订单已取出纸质车票
@end
