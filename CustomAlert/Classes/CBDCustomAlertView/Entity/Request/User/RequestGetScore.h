//
//  RequestGetScore.h
//  CarBaDa
//
//  Created by zhaitong on 2018/9/4.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetScore : TCTRequestObject
@property (nonatomic, strong) NSString *projectId;
@property (nonatomic, strong) NSString *amount;//当前订单金额
@end
