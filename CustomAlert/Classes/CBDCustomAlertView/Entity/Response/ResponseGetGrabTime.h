//
//  ResposeGetGrabTime.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetGrabTime : NSObject
@property (nonatomic, copy) NSString *currentTime;//服务器当前时间
@property (nonatomic, copy) NSString *grabCloseTime;//抢票截止时间
@property (nonatomic, copy) NSString *grabStartTime;//抢票开始时间
@property (nonatomic, strong) NSString *instr;
@property (nonatomic, copy) NSString *instrTime;//替换instr字段中的#
@end
