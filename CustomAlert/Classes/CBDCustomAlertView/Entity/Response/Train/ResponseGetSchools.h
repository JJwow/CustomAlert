//
//  ResponseGetSchools.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/3.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface schoolList : NSObject
@property (nonatomic, copy) NSString *schoolCode;//学校代码
@property (nonatomic, copy) NSString *schoolName;//学校名称
@end

@interface ResponseGetSchools : NSObject
@property (nonatomic, strong) NSMutableArray *schoolList;//学校列表
@end
