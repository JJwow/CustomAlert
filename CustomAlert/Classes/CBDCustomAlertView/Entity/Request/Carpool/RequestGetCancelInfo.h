//
//  RequestGetCancelInfo.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/2/25.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetCancelInfo : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *driverStatus;
@end

NS_ASSUME_NONNULL_END
