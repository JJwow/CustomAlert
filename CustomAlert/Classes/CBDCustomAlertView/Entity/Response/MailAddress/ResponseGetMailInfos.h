//
//  ResponseGetMailInfos.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/23.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface mailList : NSObject
@property (nonatomic, strong)NSString *mailId;//邮寄Id
@property (nonatomic, strong)NSString *memberId;//会员Id
@property (nonatomic, strong)NSString *addressee;//收件人
@property (nonatomic, strong)NSString *mobile;//手机号
@property (nonatomic, strong)NSString *localArea;//所在地区
@property (nonatomic, strong)NSString *address;//详细地址
@property (nonatomic, strong)NSString *province;//省
@property (nonatomic, strong)NSString *city;//市
@property (nonatomic, strong)NSString *district;//区县

@property (nonatomic, assign)BOOL bShowOnTable;//非接口传，本地用。是否验证可用性（不可用不能展示在填写页，火车逻辑）

@property (nonatomic, copy) NSString *sLocalAddress;//详细地址（包含省市区）
@end

@interface ResponseGetMailInfos : NSObject
@property (nonatomic, strong)NSArray *mailList;//邮寄列表
@end
