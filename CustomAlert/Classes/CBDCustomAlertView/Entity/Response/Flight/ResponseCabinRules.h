//
//  ResponseCabinRules.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface rules : NSObject


@property (nonatomic, strong) NSString *ruleType;//"规则类型：1-成人2-儿童3-婴儿"
@property (nonatomic, strong) NSString *rcTime;//退改签时间点（起飞前 2 小时）
@property (nonatomic, strong) NSString *rcTimeConverted;//2019-04-24 20:00前
@property (nonatomic, strong) NSString *refundMoney;//退票费/人（89.00），可能也会出现文字描述，类似“退票费无法自劢核算”
@property (nonatomic, strong) NSString *refundMoneyConverted;//¥38/人
@property (nonatomic, strong) NSString *refundRatio;//退票比例-百分比（5），可能也会出现文字描述，类似“退票费无法自劢核算”
@property (nonatomic, strong) NSString *sameCabinChangeMoney;//同舱改期费（0 表示免费），可能也会出现文字描述，类似“不得发更”
@property (nonatomic, strong) NSString *changeMoneyConverted;
@property (nonatomic, strong) NSString *sameCabinChangeRatio;//同舱改期比例-百分比（5），可能也会出现文字描述，类似“不得发更”
@property (nonatomic, strong) NSString *ruleDesc;//规则描述，例如：允许转签
@property (nonatomic, strong) NSString *isExpire;//是否过期(0:未过期;1:过期)


@end

@interface ResponseCabinRules : TCTResponseObject

@property (nonatomic, strong) NSString *ruleRemark;//服务规则说明
@property (nonatomic, strong) NSString *baseRule;//退改签规则

@property (nonatomic, strong)NSMutableArray *rules;//    退改签规则

@end

NS_ASSUME_NONNULL_END
