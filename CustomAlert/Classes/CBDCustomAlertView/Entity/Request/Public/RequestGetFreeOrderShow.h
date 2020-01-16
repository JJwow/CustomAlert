//
//  RequestGetFreeOrderShow.h
//  CarBaDa
//
//  Created by John on 2018/6/22.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetFreeOrderShow : TCTRequestObject

@property (nonatomic, strong)NSString *memberId;//会员id

@property (nonatomic, strong)NSString *project;//项目ID

@property (nonatomic, strong)NSString *city;//出发城市名称

@end
