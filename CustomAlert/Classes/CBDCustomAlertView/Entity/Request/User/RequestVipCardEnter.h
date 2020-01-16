//
//  RequestVipCardEnter.h
//  CarBaDa
//
//  Created by zhaitong on 2019/1/3.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestVipCardEnter : TCTRequestObject
@property (nonatomic, strong) NSString *page;//1 我的页面  2会员权益页面
@property (nonatomic, strong) NSString *cardType;//卡类型（1、超级管家卡）
@property (nonatomic, strong) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
