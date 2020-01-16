//
//  RequestTrainNoPermit.h
//  CarBaDa
//
//  Created by 丁健 on 2017/8/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainNoPermit : TCTRequestObject

@property (nonatomic, copy) NSString *fromStation;//出发站
@property (nonatomic, copy) NSString *queryKey;//查询key
@property (nonatomic, copy) NSString *toStation;//到达站
@property (nonatomic, copy) NSString *trainDate;//发车日期
@property (nonatomic, copy) NSString *trainNo;//车次号

@end
