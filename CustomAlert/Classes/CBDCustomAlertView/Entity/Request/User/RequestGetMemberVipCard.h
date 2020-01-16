//
//  RequestGetMemberVipCard.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/3.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetMemberVipCard : TCTRequestObject

@property (nonatomic, strong) NSString *cardType;//卡类型（1、超级管家卡）
@property (nonatomic, strong) NSString *memberId;

@end

NS_ASSUME_NONNULL_END
