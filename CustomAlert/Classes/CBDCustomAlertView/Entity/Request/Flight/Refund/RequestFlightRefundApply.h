//
//  RequestFlightRefundApply.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/7.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@class passengers;

@interface RequestFlightRefundApply : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *serialId;
@property (nonatomic, copy) NSString *reasonId;
@property (nonatomic, copy) NSString *reasonRemark;//申请理由内容（非必填）

@property (nonatomic, copy) NSMutableArray *passengers;

@end

NS_ASSUME_NONNULL_END
