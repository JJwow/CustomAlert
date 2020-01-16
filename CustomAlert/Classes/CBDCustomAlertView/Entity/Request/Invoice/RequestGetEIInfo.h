//
//  RequestGetEIInfo.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/12/9.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetEIInfo : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@end

NS_ASSUME_NONNULL_END
