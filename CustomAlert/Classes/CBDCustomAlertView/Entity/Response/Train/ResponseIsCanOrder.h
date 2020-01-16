//
//  ResponseIsCanOrder.h
//  CarBaDa
//
//  Created by admin on 16/5/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrainNo.h"
@interface ResponseIsCanOrder : NSObject

@property (nonatomic, strong) NSString *isCanOrder;//	是否可以下单(	“1”：可以，“0”：不可以)
@property (nonatomic, strong) NSString *isSuccess;
@property (nonatomic, strong) NSString *failMsg; //失败信息
@property (nonatomic, strong) NSString *otButton; //是否显示12306登录按钮	0：否 1：是
@end
