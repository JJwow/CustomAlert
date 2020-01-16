//
//  Requestgetpresaleperiod.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/20.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetPreSalePeriod : TCTRequestObject

@property (nonatomic, copy) NSString *scene;//场景（1:普通，2:改签，3:学生，4:抢票，5:其他）-V480
@property (nonatomic, copy) NSString *fromTime;//发车时间（yyyy-MM-dd hh:mm），仅改签单需要

@end
