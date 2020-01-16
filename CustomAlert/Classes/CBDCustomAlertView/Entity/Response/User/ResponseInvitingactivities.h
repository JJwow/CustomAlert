//
//  ResponseInvitingactivities.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/28.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, InvitingActivityType) {
    InvitingActivityType_ToDone = 1,//去完成
    InvitingActivityType_ToGet = 2,//去领取
    InvitingActivityType_GrabDone = 3,//已抢光
    InvitingActivityType_Unlock = 4,//未解锁
    InvitingActivityType_TimesOut = 5//次数用光
};
@interface invitingActivityList : NSObject
@property (nonatomic, strong) NSString *activityId;//活动id
@property (nonatomic, strong) NSString *imgUrl;//活动图片地址
@property (nonatomic, strong) NSString *name;//活动名称
@property (nonatomic, strong) NSString *subtitle;//活动副标题
@property (nonatomic, strong) NSString *startDate;//开始时间（时间格式：XXXX年X月X日）
@property (nonatomic, strong) NSString *endDate;//结束时间（时间格式：XXXX年X月X日）
@property (nonatomic, strong) NSString *state;//活动状态，1-去完成；2-去领取；3-已抢光，4-未解锁；5-次数用光
@property (nonatomic, strong) NSString *miniLevel;//最低等级适用
@property (nonatomic, strong) NSString *leftNum;//剩余数量
@property (nonatomic, strong) NSString *leftPercentage;//剩余百分比
@property (nonatomic, strong) NSString *url;//跳转链接地址（需要支持专题跳转和外链跳转）

@end
@interface ResponseInvitingactivities : NSObject
@property (nonatomic, strong) NSArray *invitingActivityList;
@end

NS_ASSUME_NONNULL_END
