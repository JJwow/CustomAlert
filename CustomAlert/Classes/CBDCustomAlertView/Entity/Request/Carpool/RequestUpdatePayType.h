//
//  RequestUpdatePayType.h
//  CarBaDa
//
//  Created by zhaitong on 2018/12/5.
//  Copyright © 2018 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestUpdatePayType : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;//会员Id
@property (nonatomic, strong) NSString *orderSerialId;//订单号
@property (nonatomic, strong) NSString *PayType;//6 支付宝代扣 , 7微信代扣
@property (nonatomic, strong) NSString *projectType;//项目类型
@end

NS_ASSUME_NONNULL_END
