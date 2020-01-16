//
//  RequestGetOnlineUrl.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/7.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetOnlineUrl : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;//会员ID
@property (nonatomic, copy)NSString *formPage;//页面路径
@property (nonatomic, copy)NSString *pageid;//pageid
@property (nonatomic, copy)NSString *orderid;//订单id
@property (nonatomic, copy)NSString *level;//会员等级


@end

NS_ASSUME_NONNULL_END
