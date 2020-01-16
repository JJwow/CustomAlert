//
//  ResponseVipCardMain.h
//  CarBaDa
//
//  Created by 丁健 on 2019/4/2.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface myrights : NSObject
@property (nonatomic,copy) NSString *myrightsRecord;//权益剩余记录
@property (nonatomic,copy) NSString *myrightsType;//权益类型id
@end

@interface ResponseVipCardMain : NSObject
@property (nonatomic,copy) NSString *cardName;//卡片名称
@property (nonatomic,copy) NSString *isOpen;//是否开通
@property (nonatomic,copy) NSString *hasSaved;//已节省金额
@property (nonatomic,copy) NSString *expireDate;//到期日期2098-12-29
@property (nonatomic,copy) NSString *maxSavings;//每月最高可省
@property (nonatomic,copy) NSArray *buyRecordList;//管家头条列表["159****2059开通月卡三","159****2059开通月卡二","137****1024开通vip金卡"]
@property (nonatomic,copy) NSString *costPrice;//原价
@property (nonatomic,copy) NSString *sellPrice;//卖价
@property (nonatomic,copy) NSArray *myrights;//权益剩余记录
@property (nonatomic,copy) NSArray *rightsList;//权益列表
@property (nonatomic,copy) NSString *cardRemark;//提示文案
@end

NS_ASSUME_NONNULL_END

