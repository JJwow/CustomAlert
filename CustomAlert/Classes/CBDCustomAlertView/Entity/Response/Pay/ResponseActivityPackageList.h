//
//  ResponseActivityPackageList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCGlobal.h"
@interface redPacketList : NSObject
@property (nonatomic, strong) NSString *couponAmount;//红包金额
@property (nonatomic, strong) NSString *startDate;//开始时间
@property (nonatomic, strong) NSString *minOrderAmount;//限制条件描述
@property (nonatomic, strong) NSString *couponname;//红包名称
@property (nonatomic, strong) NSString *batchCode;//红包批次号
@property (nonatomic, strong) NSString *overdueDate;//失效时间
@property (nonatomic, strong) NSString *limitDesp;//限制条件描述
@property (nonatomic, strong) NSString *batchTitle;//红包批次描述
@property (nonatomic, strong) NSString *appLink;//外链
@property (nonatomic, strong) NSString *ruleNo;
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, assign) PayRedpackageResult packageResult;
@end

@interface ResponseActivityPackageList : NSObject
@property (nonatomic, strong) NSArray *redPacketList;
@property (nonatomic, copy) NSString *adId;
@property (nonatomic, strong) NSString *caid;//红包活动ID
@end
