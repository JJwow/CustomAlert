//
//  RequestWaitGrabInfo.h
//  CarBaDa
//
//  Created by zhaitong on 2019/12/14.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestWaitGrabInfo : TCTRequestObject
@property (nonatomic, copy) NSString *serialId; //订单流水号
@property (nonatomic, copy) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
