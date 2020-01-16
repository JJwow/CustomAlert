//
//  PageInfo.h
//  CarBaDa
//
//  Created by Alex on 6/11/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface pageInfo : NSObject
@property (nonatomic,strong) NSString *pageIndex;
@property (nonatomic,strong) NSString *pageSize;
@property (nonatomic,strong) NSString *totalPage;
@property (nonatomic,strong) NSString *totalCount;
@end
