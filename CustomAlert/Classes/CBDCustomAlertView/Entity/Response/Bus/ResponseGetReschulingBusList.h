//
//  ResponseGetReschulingBusList.h
//  CarBaDa
//
//  Created by John on 2018/7/21.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"
#import "TCGlobal.h"

@interface ResponseGetReschulingBusList : NSObject
@property (nonatomic,strong) NSMutableArray *scheduleList;
@property (nonatomic,strong) NSArray *categoryList;//车次搜索结果各个维度集合（出发车站、到达车站、出发时段）
@property (nonatomic,strong) pageInfo *pageInfo;
@property (nonatomic,strong) NSString *isReturn;
@property (nonatomic,strong) NSString *recOtherLine;//推荐其他出发站的车次    0不推荐 1推荐
@property (nonatomic, strong) NSString *lineRemark;//线路提示文案
@property (nonatomic, strong) NSString *maxSaleDay;//最大可售天数
@end
