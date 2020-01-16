//
//  RequestFlightDetail.h
//  CarBaDa
//
//  Created by zjb on 2019/4/26.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightDetail : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *serialId;
@end

NS_ASSUME_NONNULL_END
