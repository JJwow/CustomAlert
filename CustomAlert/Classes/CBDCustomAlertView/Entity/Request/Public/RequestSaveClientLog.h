//
//  RequestSaveClientLog.h
//  CarBaDa
//
//  Created by zhaitong on 2018/9/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestSaveClientLog : TCTRequestObject
@property (nonatomic, strong) NSString *keyWord;//关键词
@property (nonatomic, strong) NSString *queryString;//请求
@property (nonatomic, strong) NSString *resultString;//返回
@end
