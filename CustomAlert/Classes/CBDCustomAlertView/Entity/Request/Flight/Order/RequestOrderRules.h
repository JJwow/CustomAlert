//
//  RequestOrderRules.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestOrderRules : TCTRequestObject

@property (nonatomic, copy) NSString *serialId;
@property (nonatomic, copy) NSString *depTime;

@end

NS_ASSUME_NONNULL_END
