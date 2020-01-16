//
//  ResponseGetIndexInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2017/9/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetIndexInfo : NSObject

@property (nonatomic, copy) NSString *customize;//在线选座角标
@property (nonatomic, copy) NSString *grabTicket;//抢票角标
@property (nonatomic, copy) NSString *official;//12306登录角标
@property (nonatomic, copy) NSString *trainService;//火车票服务角标
@end
