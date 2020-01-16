//
//  RequestSearchSellableIns.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSearchSellableIns : TCTRequestObject

@property (nonatomic, copy) NSString *projectType;//项目类型
@property (nonatomic, copy) NSString *sellType;//售卖场景(1:正常售卖;2:弹框推荐;3:火车票抢票)
@property (nonatomic, copy) NSString *platType;//平台类型
@property (nonatomic, copy) NSString *memberId;//会员ID
@property (nonatomic, copy) NSString *price;//票价
@property (nonatomic, copy) NSString *cityName;//城市名称

@end

NS_ASSUME_NONNULL_END
