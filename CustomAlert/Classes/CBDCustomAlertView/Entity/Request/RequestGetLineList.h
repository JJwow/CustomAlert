//
//  RequestGetLineList.h
//  CarBaDa
//
//  Created by admin on 16/3/28.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetLineList : TCTRequestObject

@property(nonatomic, copy)NSString *departure;//出发地
@property(nonatomic, copy)NSString *depDate;//出发日期
@property(nonatomic, copy)NSString *destination;//到达地
@property(nonatomic, copy)NSString *projectType;//项目类型

//接送机用
@property(nonatomic, copy)NSString *departureSite;//送机传空、接机传机场名称
@property(nonatomic, copy)NSString *destinationSite;//送机传机场名称、接机传空；

@end
