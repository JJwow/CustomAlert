//
//  ResponseGetLastMail.h
//  CarBaDa
//
//  Created by Vic_Li on 16/8/5.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetMailInfos.h"

@interface ResponseGetLastMail : NSObject
@property (nonatomic, strong)NSString *mailId;//邮寄Id
@property (nonatomic, strong)NSString *memberId;//会员Id
@property (nonatomic, strong)NSString *addressee;//收件人
@property (nonatomic, strong)NSString *mobile;//手机号
@property (nonatomic, strong)NSString *localArea;//所在地区
@property (nonatomic, strong)NSString *address;//详细地址
@property (nonatomic, strong)NSString *province;//省
@property (nonatomic, strong)NSString *city;//市
@property (nonatomic, strong)NSString *district;//区县

- (mailList *)maillistWithObject;
@end
