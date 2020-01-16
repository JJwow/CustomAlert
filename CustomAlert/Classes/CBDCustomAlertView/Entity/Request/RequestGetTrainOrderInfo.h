//
//  RequestGetTrainOrderInfo.h
//  CarBaDa
//
//  Created by zhaitong on 15/12/1.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainOrderInfo : TCTRequestObject
@property (nonatomic, copy) NSString *serialId; //订单流水号
@end
