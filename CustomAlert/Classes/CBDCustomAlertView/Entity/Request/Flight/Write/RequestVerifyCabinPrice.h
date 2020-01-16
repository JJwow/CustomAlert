//
//  RequestVerifyCabinPrice.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


NS_ASSUME_NONNULL_BEGIN

@interface RequestVerifyCabinPrice : TCTRequestObject

@property (nonatomic, strong) NSString *cabinKey;//航班查询的舱位 Key 值
@property (nonatomic, strong) NSString *adultNumber;//成人数量
@property (nonatomic, strong) NSString *childNumber;//儿童数量

@end

NS_ASSUME_NONNULL_END
