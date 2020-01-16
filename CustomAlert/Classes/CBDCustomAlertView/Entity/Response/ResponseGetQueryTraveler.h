//
//  ResponseGetQueryTraveler.h
//  CarBaDa
//
//  Created by zhaitong on 16/3/21.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetQueryTraveler : NSObject
@property (nonatomic, copy) NSString *isSuccess; //是否成功
@property (nonatomic,strong) NSMutableArray *linkerList; //12306常旅信息
@end
