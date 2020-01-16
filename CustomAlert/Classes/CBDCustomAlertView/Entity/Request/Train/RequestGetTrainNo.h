//
//  RequestGetTrainNo.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/24.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainNo : TCTRequestObject
@property (nonatomic,copy) NSString *fromStation;//发车站
@property (nonatomic,copy) NSString *toStation;//到达站
@property (nonatomic,copy) NSString *trainDate;//发车日期
@property (nonatomic,copy) NSString *trainNo;//车次号
@property (nonatomic,copy) NSString *isLogin;//是否登录12306
@property (nonatomic,copy) NSString *isChangeTicket;//是否改签	0：否 1：是	~241
@property (nonatomic, copy) NSString *isStudent;//是否学生票 0否1是
@property (nonatomic,copy) NSString *oldPrice;//旧票价

@end
