//
//  RequestGetCheckTicketInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/5/27.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetCheckTicketInfo : TCTRequestObject
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
