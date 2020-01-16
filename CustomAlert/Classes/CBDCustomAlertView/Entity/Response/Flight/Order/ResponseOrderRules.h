//
//  ResponseOrderRules.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseOrderRules : TCTResponseObject

@property (nonatomic, strong) NSString *ruleRemark;
@property (nonatomic, strong) NSString *baseRule;
@property (nonatomic, strong) NSMutableArray *rules;//    退改签规则

@end

NS_ASSUME_NONNULL_END
