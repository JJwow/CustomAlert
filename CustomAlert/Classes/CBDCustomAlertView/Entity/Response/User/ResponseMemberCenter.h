//
//  ResponseMemberCenter.h
//  CarBaDa
//
//  Created by 丁健 on 2018/9/5.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseMemberCenter : NSObject
@property (nonatomic, copy) NSString *level;//等级
@property (nonatomic, copy) NSString *levelName;//等级名称
@property (nonatomic, copy) NSArray *rightList;//当前权益
@end
