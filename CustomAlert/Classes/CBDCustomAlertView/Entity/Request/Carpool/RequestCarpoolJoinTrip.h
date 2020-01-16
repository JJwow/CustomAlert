//
//  RequestCarpoolJoinTrip.h
//  CarBaDa
//
//  Created by John on 2018/11/4.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

#import "Responsegetorderlist.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCarpoolJoinTrip : TCTRequestObject

@property (nonatomic,copy) NSString *memberId;//会员Id

@property (nonatomic,copy) NSString *orderSerialId;//订单流水号

@property (nonatomic,copy) NSString *mergeNum;

@property (nonatomic,strong) NSMutableArray *orderList;

@end

NS_ASSUME_NONNULL_END
