//
//  Responsegetredpackagelist.h
//  CarBaDa
//
//  Created by Alex on 15/6/18.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"

@class recovery;

@interface Responsegetredpackagelist : NSObject
@property (nonatomic,strong) NSMutableArray *memberCouponList;
@property (nonatomic, strong) recovery *recovery;//复活红包
@property (nonatomic,strong) pageInfo *pageInfo;
@property (nonatomic,strong) NSString *isSuccess;

@end

@interface memberCouponList : NSObject
@property (nonatomic,strong) NSString *couponCode;
@property (nonatomic,strong) NSString *batchType;
@property (nonatomic,strong) NSString *batchTypeName;
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *projectTypeName;
@property (nonatomic,strong) NSString *minOrderAmount;
@property (nonatomic,strong) NSString *couponAmount;
@property (nonatomic,strong) NSString *startDate;
@property (nonatomic,strong) NSString *overdueDate;
@property (nonatomic,strong) NSString *isActive;
@property (nonatomic,strong) NSString *isConfirmRule;//符合规则可用（使用红包需要满足要求，如：满多少减多少）
@property (nonatomic,strong) NSString *isUsed;
@property (nonatomic,strong) NSString *ruleNo;
@property (nonatomic,strong) NSString *usedDate;
@property (nonatomic,strong) NSString *limitDesp;
@property (nonatomic, copy) NSString *activeLabel;//红包标签
@property (nonatomic, copy) NSString *limitDateDes;//限制日期使用说明
@property (nonatomic, copy) NSString *appLink;//外链地址
@property (nonatomic, copy) NSString *isRecoveryRedpacket;//是否是复活红包（0、不是，1、是）
@property (nonatomic, strong) NSString *priceUseLimitDesp;//使用规则价格描述

@end

@interface recovery : NSObject

@property (nonatomic,strong) NSString *confirm; //确认复活的提示内容
@property (nonatomic,strong) NSString *recoveryTitle; //复活区标题
@property (nonatomic,strong) NSString *recoveryDescribe; //复活区描述
@property (nonatomic,strong) NSString *tips; //提醒
@property (nonatomic,strong) NSMutableArray *recoveryList; //可复活的红包列表

@end

@interface recoveryList : memberCouponList

@property (nonatomic,strong) NSString *downLoadUrl;
@property (nonatomic,strong) NSString *isSupport;

@end



