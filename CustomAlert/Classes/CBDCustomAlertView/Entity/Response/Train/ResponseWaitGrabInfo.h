//
//  ResponseWaitGrabInfo.h
//  CarBaDa
//
//  Created by zhaitong on 2019/12/14.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface waitTrains : NSObject
@property (nonatomic, copy) NSString *fromStation;//出发站中文名
@property (nonatomic, copy) NSString *toStation;//到达站中文名
@property (nonatomic, copy) NSString *trainNo;//车次
@property (nonatomic, copy) NSString *trainDate;//trainDate
@property (nonatomic, copy) NSString *seatClass;//坐席CODE
@property (nonatomic, copy) NSString *seatName;//坐席
@property (nonatomic, copy) NSString *rank;//排名
@end

@interface ResponseWaitGrabInfo : NSObject
@property (nonatomic,strong) NSMutableArray *waitTrains;//车次列表
@end

NS_ASSUME_NONNULL_END
