//
//  RequestResortsOrderInfo.h
//  CarBaDa
//
//  Created by zhaitong on 16/7/8.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestResortsOrderInfo : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *serialId;//巴管订单流水号
@property (nonatomic, copy) NSString *tcserialId;//同程订单流水号
@end
