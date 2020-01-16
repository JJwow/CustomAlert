//
//  RequestGetPointRange.h
//  CarBaDa
//
//  Created by 丁健 on 2019/10/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


@interface RequestGetPointRange : TCTRequestObject
@property (nonatomic, copy) NSString *pointId;//    站点id
@property (nonatomic, copy) NSString *pointSource;//     站点来源    0 老系统  1 新系统
@end

