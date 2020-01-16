//
//  RequestPayScoreGetQuery.h
//  CarBaDa
//
//  Created by Jabir-Zhang on 2019/12/3.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestPayScoreGetQuery : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
