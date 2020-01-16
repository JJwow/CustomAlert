//
//  ResponseGetEvaluateOrder.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/4/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetEvaluateOrder : NSObject

@property (nonatomic, copy) NSString *orderSerialId;//订单流水号

@property (nonatomic, copy) NSString *evaluatePrompt;//提示文案

@end

NS_ASSUME_NONNULL_END
