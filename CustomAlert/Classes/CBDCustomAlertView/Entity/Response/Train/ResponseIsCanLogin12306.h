//
//  ResponseIsCanLogin12306.h
//  CarBaDa
//
//  Created by 丁健 on 16/3/22.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseIsCanLogin12306 : NSObject

@property (nonatomic, strong) NSString *isCanLogin;//是否可以登录
@property (nonatomic, strong) NSString *loginMsg;//禁止登录原因
@property (nonatomic, strong) NSString *isSuccess;//是否成功
@end
