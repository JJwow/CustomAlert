//
//  RequestInvitingactivities.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/28.
//  Copyright © 2018 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestInvitingactivities : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *page;//页面（1：我的页面；2：会员中心）
@end

NS_ASSUME_NONNULL_END
