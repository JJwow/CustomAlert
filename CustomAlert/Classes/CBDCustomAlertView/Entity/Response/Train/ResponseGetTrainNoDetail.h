//
//  ResponseGetTrainNoDetail.h
//  CarBaDa
//
//  Created by 丁健 on 2019/2/21.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponsePolicygetsell.h"

NS_ASSUME_NONNULL_BEGIN

@interface bookingWays : NSObject
@property (nonatomic,copy) NSString *wayType;// 1、12306,2、优享预订，3、快递送票
@property (nonatomic,copy) NSString *mainTitle;//主标题
@property (nonatomic,copy) NSString *subTitle;//副标题
@property (nonatomic,copy) NSString *packBatchCode;//优惠券编号
@end

@interface policyPackageList : NSObject
@property (nonatomic,copy) NSString *content;// 套餐名称
@property (nonatomic,copy) NSString *originalPrice;//原价
@property (nonatomic,copy) NSString *sellPrice;// 套餐价
@end

@interface ResponseGetTrainNoDetail : NSObject
@property (nonatomic,copy) NSString *queryKey;//
@property (nonatomic,copy) NSString *fromDate;//发车日期
@property (nonatomic,copy) NSString *fromTime;//发车时间
@property (nonatomic,copy) NSString *toDate;//到达日期
@property (nonatomic,copy) NSString *toTime;//到达时间
@property (nonatomic,copy) NSString *isShowTransfer;//显示上车补票入口
@property (nonatomic,copy) NSString *tips;//提示信息
@property (nonatomic,copy) NSArray *tickets;//
@property (nonatomic,copy) NSArray *bookingWays;//预定通道
@property (nonatomic,copy) NSArray *policyList;//政策
@property (nonatomic,copy) NSString *waitBuy;//候补抢票cell是否展示
@end

NS_ASSUME_NONNULL_END
