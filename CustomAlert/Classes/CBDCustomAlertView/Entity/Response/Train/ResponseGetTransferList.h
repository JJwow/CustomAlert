//
//  ResponseGetTransferList.h
//  CarBaDa
//
//  Created by 丁健 on 2018/1/10.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCGlobal.h"

@interface ResponseGetTransferList : NSObject
@property (nonatomic, copy) NSArray *transferStationCategoryList;//中转站筛选    16中转站    ~350
@property (nonatomic, copy) NSArray *transfers;
@property (nonatomic, copy) NSArray *traincategoryList;//筛选分类    11车次类型；12发车时段；13到达时段；14出发车站；15到达车站；16中转站 17同站换乘 18换乘时间段    ~350
@end


