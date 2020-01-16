//
//  ResponseQueryMemberScore.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/15.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseQueryMemberScore : NSObject

@property (nonatomic, strong) NSString *points;//现有积分
@property (nonatomic, strong) NSString *pointsSending;//待入账积分
@property (nonatomic, strong) NSString *scores;//成长值
@property (nonatomic, strong) NSString *hasSigned;//当天是否已签到
@property (nonatomic, strong) NSString *todayPoints;//今天签到可获得积分
@property (nonatomic, strong) NSString *tomorrowPoints;//明天可获得积分

@end
