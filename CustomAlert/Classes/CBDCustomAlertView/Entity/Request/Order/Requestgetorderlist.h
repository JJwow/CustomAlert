//
//  Requestgetorderlist.h
//  CarBaDa
//
//  Created by zhang on 15/6/29.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#define RequestgetorderlistInterfaceURL        [NSString stringWithFormat:@"%@orderlist/Handler/OrderHandler.ashx",APIDomain]

@interface Requestgetorderlist : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *category;//    0：全部 1：汽车票 2：用车 3：定制巴士 4：校园巴士 5：机场巴士 7：火车票
@property (nonatomic,strong) NSString *subCategory;//0:一个月内 1：一个月之后 不传则查全部 2:三个月内 3:三个月前 4:行程助手 5-排除待支付的未出行订单，6-待支付订单，7-历史行程；
@property (nonatomic,strong) NSString *pageindex;
@property (nonatomic,strong) NSString *pageSize;
@end
