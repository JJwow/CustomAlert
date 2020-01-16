//
//  RequestUpdateAutoShareCarPosition.h
//  CarBaDa
//
//  Created by 丁健 on 2018/10/31.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestUpdateAutoShareCarPosition : TCTRequestObject

@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *isAuto;//是否自动分享行程（0：不自动；1：自动）
@property (nonatomic, copy)NSString *beginTime;//分享开始时间（格式HH：MM）
@property (nonatomic, copy)NSString *endTime;//分享结束时间（格式HH：MM）

@end

NS_ASSUME_NONNULL_END
