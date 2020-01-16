//
//  ResponseGetDisparityRefundProgress.h
//  CarBaDa
//
//  Created by zjb on 2018/3/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusRefoundProgress.h"

@interface ResponseGetDisparityRefundProgress : NSObject
@property (nonatomic, strong) NSString *diffPrice;//差价
@property (nonatomic, strong) NSString *title;//标题    退款差价#元会在1-7个工作日内退至原支付账户
@property (nonatomic, strong) NSArray *progressItems;//节点列表


@end
