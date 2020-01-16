//
//  ResponseReturnActivity.h
//  CarBaDa
//
//  Created by zhaitong on 2019/10/23.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseReturnActivity : NSObject
@property (nonatomic, strong) NSString *amount;//活动返现金额
@property (nonatomic, strong) NSString *state;//状态（0、不可参加活动，1、可弹框，2、参加活动中，3、活动结束）
@property (nonatomic, strong) NSString *imageUrl;//图片URL
@end

NS_ASSUME_NONNULL_END
