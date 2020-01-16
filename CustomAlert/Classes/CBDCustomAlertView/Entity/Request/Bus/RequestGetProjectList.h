//
//  RequestGetProjectList.h
//  CarBaDa
//
//  Created by zhaitong on 16/7/6.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetProjectList : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *locationId;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *district;
@property (nonatomic, copy) NSString *province;
@property (nonatomic, copy) NSString *listType;//0-首页底部入口+tab   1-tab  2-首页底部入口
@end
