//
//  RequestGetBusCity.h
//  CarBaDa
//
//  Created by zjb on 16/7/7.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusCity : TCTRequestObject
@property (nonatomic, copy) NSString *pageIndex;
@property (nonatomic, copy) NSString *pageSize;
@end

