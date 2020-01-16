//
//  RequestVipCardMain.h
//  CarBaDa
//
//  Created by 丁健 on 2019/4/2.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestVipCardMain : TCTRequestObject
@property (nonatomic, copy) NSString *cardType;//卡类型（1、超级管家卡）
@property (nonatomic, copy) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
