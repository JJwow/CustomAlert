//
//  ResponseGetPendingOrders.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/6/1.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetPendingOrders : NSObject
@property (nonatomic, copy) NSString *count;
@property (nonatomic, copy) NSString *enableBusPending;//是否关闭；数据字段code：EnableBusPending
@end
