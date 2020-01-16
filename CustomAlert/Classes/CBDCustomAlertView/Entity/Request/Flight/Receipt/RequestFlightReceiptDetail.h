//
//  RequestFlightReceiptDetail.h
//  CarBaDa
//
//  Created by zjb on 2019/4/29.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightReceiptDetail : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;//订单流水号
@end

NS_ASSUME_NONNULL_END
