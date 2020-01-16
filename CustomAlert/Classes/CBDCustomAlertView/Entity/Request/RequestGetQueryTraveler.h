//
//  RequestGetQueryTraveler.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/21.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetQueryTraveler : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic, copy) NSString *accountNo; //会员账号
@property (nonatomic, copy) NSString *queryType; //查询类型 0从缓存取，取不到最新的，1从12306取
@property (nonatomic, copy) NSString *source;//请求入口    0:通用入口 1学生票入口;
@end
