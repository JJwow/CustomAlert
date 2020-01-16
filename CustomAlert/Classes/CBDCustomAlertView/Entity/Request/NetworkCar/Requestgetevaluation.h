//
//  Requestgetevaluation.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

//获取评价详情
@interface Requestgetevaluation : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *orderSerial;//订单流水

@end
