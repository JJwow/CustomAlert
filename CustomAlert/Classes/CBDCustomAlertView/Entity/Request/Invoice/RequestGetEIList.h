//
//  RequestGetEIList.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/12/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetEIList : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *type;//类型：0：待开票 1：已开票
@property (nonatomic, copy) NSString *LimitDay;//当Type=1时，查询下单时间多少天以内的已开票订单 不传或给0，默认180天

@end

NS_ASSUME_NONNULL_END
