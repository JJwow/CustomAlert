//
//  RwquestGetGetHotelDetail.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/18.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetHotelDetail : TCTRequestObject

@property (nonatomic, copy)NSString *resourceId;//酒店id
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *startDate;//
@property (nonatomic, copy) NSString *endDate;//

@property (nonatomic, strong) NSArray *roomFilters;//房型筛选条件
@end


@interface roomFilters : NSObject
@property (nonatomic, copy)NSString *categoryId;//筛选分类
@property (nonatomic, copy) NSString *filterValue;//筛选分类值

- (roomFilters*)initWithId:(NSString*)categoryId value:(NSString*)filterValue;
@end

