//
//  RequestGetCommodityList.h
//  CarBaDa
//
//  Created by Vic_Li on 2018/3/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCommodityList : TCTRequestObject
@property (nonatomic, copy) NSString *showPlat;//分类展示位置（0、积分商城，1、生活卖场）

@end
