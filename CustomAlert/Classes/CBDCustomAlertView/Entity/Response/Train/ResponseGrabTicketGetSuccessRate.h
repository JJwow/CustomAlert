//
//  ResponseGrabTicketGetSuccessRate.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface recommend : NSObject
@property (nonatomic, strong) NSString *recommendName;//推荐抢票名称 -V480
@property (nonatomic, strong) NSString *recommendCount;//推荐抢票速度份数 -V480
@property (nonatomic, strong) NSString *recommendgrabSuccessRate;//推荐抢票的成功率 -V480
@property (nonatomic, strong) NSString *recommendPriorityRate;//推荐抢票的优先用户 -V480
@property (nonatomic, strong) NSString *recommendLevel;//推荐抢票等级-V480
@end

@interface ResponseGrabTicketGetSuccessRate : NSObject
@property (nonatomic, copy) NSString *grabDifficulty;//难度
@property (nonatomic, copy) NSString *grabFrequency;//抢票频率
@property (nonatomic, copy) NSString *grabSuccessRate;//抢票成功率
@property (nonatomic, copy) NSString *memberLevel;//会员等级-V370
@property (nonatomic, copy) NSString *memberWealSpeedpackageCount;//会员福利赠送加速包的数量 - V370
@property (nonatomic, copy) NSString *priorityRate;//优先率
@property (nonatomic, copy) NSString *speedPacketDefaultCount;//加速包默认数量
@property (nonatomic, copy) NSString *speedPacketPrice;//加速包单价
@property (nonatomic, strong) NSString *accelerateLevel;//加速等级（0、1、2、3、4）
//@property (nonatomic, strong) NSString *nextLevel;//下一级等级名称
//@property (nonatomic, strong) NSString *nextLevelAcceleratorPackCount;//下一级需要加速包个数
@property (nonatomic, strong) recommend *recommend;//推荐速度
@property (nonatomic, assign) NSInteger iPassengerCount;//自定义乘客数量属性（非接口）
@end


