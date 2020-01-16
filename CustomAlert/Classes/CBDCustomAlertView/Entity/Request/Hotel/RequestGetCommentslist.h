//
//  RequestGetcommentslist.h
//  CarBaDa
//
//  Created by likaikun on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCommentslist : TCTRequestObject

@property (nonatomic, copy) NSString *labId;//lab标签
@property (nonatomic, copy) NSString *pageIndex;//页索引
@property (nonatomic, copy) NSString *pageSize;//页码
@property (nonatomic, copy) NSString *resourceId;//酒店id

@end
