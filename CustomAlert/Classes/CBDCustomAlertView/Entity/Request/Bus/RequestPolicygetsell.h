//
//  RequestPolicygetsell.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestPolicygetsell : TCTRequestObject

@property (nonatomic, copy) NSString *projectType;//项目类型

@property (nonatomic, copy) NSString *platType;//平台类型

@property (nonatomic, copy) NSString *startCity;//出发城市

@property (nonatomic, copy) NSString *price;//正常票价

@end

NS_ASSUME_NONNULL_END
