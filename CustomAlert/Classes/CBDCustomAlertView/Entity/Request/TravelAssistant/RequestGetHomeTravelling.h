//
//  RequestGetHomeTravelling.h
//  CarBaDa
//
//  Created by zhaitong on 2019/10/26.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, RequestGetHomeTravellingType) {
    RequestGetHomeTravellingTypeShake = 0,//摇一摇
    RequestGetHomeTravellingTypeHot = 1,//热敏
    RequestGetHomeTravellingTypeAutoShake = 2 //首次自动摇一摇
};
@interface RequestGetHomeTravelling : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, strong) NSString *isHot;//1 热敏 0 摇一摇 2 自动弹框
@end

NS_ASSUME_NONNULL_END
