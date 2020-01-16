//
//  RequestOrderFillOrder.h
//  CarBaDa
//
//  Created by 丁健 on 17/3/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestOrderFillOrder : TCTRequestObject
@property (nonatomic, strong) NSString *fromStation;//出发站
@property (nonatomic, strong) NSString *toStation;//到达站
@property (nonatomic, strong) NSString *trainDate;//发车日期	2016-10-02
@property (nonatomic, strong) NSString *trainNo;//车次号
@property (nonatomic, strong) NSString *queryKey;
@property (nonatomic, strong) NSString *isStudent;//是否学生票
@property (nonatomic, strong) NSString *selectSeatType;//1指定下铺 2高铁选座 3指定靠窗
@property (nonatomic, copy) NSString *seatType;//坐席类型
@property (nonatomic, copy) NSString *wayType;//1、12306,2、优享预订，3、快递送票，4抢购预订，6、首页送票上门，7、学生票，5抢票
@end
