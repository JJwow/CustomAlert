//
//  ResponseAddUrgentContact.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseAddUrgentContact : NSObject
@property (nonatomic, copy) NSString *errorCode;//异常码
@property (nonatomic, copy) NSString *errorMsg;//异常消息
@end

NS_ASSUME_NONNULL_END