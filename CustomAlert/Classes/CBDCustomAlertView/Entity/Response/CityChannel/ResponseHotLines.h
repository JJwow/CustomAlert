//
//  ResponseHotLines.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseHotLines : NSObject

@property (nonatomic,strong) NSMutableArray *hotLineList;//热门线路列表

@end

@interface hotLineList : NSObject

@property (nonatomic,strong) NSString *destCity;//到达城市
@property (nonatomic,strong) NSString *dptCity;//出发城市

@end
