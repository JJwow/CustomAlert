//
//  ResponseGetTransferExpireTime.h
//  CarBaDa
//
//  Created by 丁健 on 2018/6/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetTransferExpireTime : NSObject
@property (nonatomic, copy) NSString *note;//错误
@property (nonatomic, copy) NSString *expireTime;//缓存过期时间
@end

