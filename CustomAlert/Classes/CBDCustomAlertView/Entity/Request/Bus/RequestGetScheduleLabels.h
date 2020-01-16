//
//  RequestGetScheduleLabels.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/9/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetScheduleLabels : TCTRequestObject

@property (nonatomic, copy) NSString *departure;//出发地

@property (nonatomic, copy) NSString *destination;//到达地

@property (nonatomic, copy) NSString *dptStation;//出发站

@property (nonatomic, copy) NSString *arrStation;//到达站（不是外显到达站）

@property (nonatomic, copy) NSString *dptDate;//出发日期

@property (nonatomic, copy) NSString *coachNo;//车次号

@end

NS_ASSUME_NONNULL_END
