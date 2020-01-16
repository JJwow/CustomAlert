//
//  ResponseScoreHistory.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/3.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface scoreHistoryList : NSObject
@property (nonatomic, strong) NSString *consumePoints;//积分数值
@property (nonatomic, strong) NSString *createDate;//积分变动时间
@property (nonatomic, strong) NSString *description;//描述
@property (nonatomic, strong) NSString *plusType;//加分 或减分
@end
@interface ResponseScoreHistory : NSObject
@property (nonatomic, strong) NSString *expirePoints;//即将过期积分
@property (nonatomic, strong) NSString *points;//总积分数
@property (nonatomic, strong) NSArray *scoreHistoryList;
@end

NS_ASSUME_NONNULL_END
