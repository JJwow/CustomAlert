//
//  RequestGetQuestionnaire.h
//  CarBaDa
//
//  Created by John on 2018/9/5.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetQuestionnaire : TCTRequestObject
@property (nonatomic, copy) NSString *nps;//nps推荐值
@property (nonatomic, copy) NSString *subject;//开放题目
@property (nonatomic, copy) NSString *projectId;//项目id
@property (nonatomic, copy) NSString *serialId;//订单流水号
@property (nonatomic, copy) NSString *orderState;//订单状态
@property (nonatomic, copy) NSString *memberId;//用户ID
@property (nonatomic, copy) NSString *startTime;//发车时间
@property (nonatomic, copy) NSString *phoneModel;//手机型号
@end
