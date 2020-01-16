//
//  RequestReturnActivity.h
//  CarBaDa
//
//  Created by zhaitong on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestReturnActivity : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *activityNo;//活动编号（火车票网关固定值）
@end

NS_ASSUME_NONNULL_END
