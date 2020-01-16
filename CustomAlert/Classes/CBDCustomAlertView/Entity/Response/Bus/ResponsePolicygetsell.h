//
//  ResponsePolicygetsell.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface policyProductList : NSObject

@property (nonatomic, copy) NSString *productType;//产品类型（1；立减；2：保险；3：红包；4:极速出票）

@property (nonatomic, copy) NSString *productName;//产品名称

@property (nonatomic, copy) NSString *showName;//外显标题

@property (nonatomic, copy) NSString *productSort;//产品排序

@property (nonatomic, copy) NSString *productCode;//产品编号（红包对应批次号；保险对应产品编码）

@property (nonatomic, copy) NSString *productIcon;//产品icon

@property (nonatomic, copy) NSString *productPrice;//产品计划售价

@property (nonatomic, copy) NSString *sellPrice;//实际售价（立减实际售价是负数）

@property (nonatomic, copy) NSString *bUseLocalIcon;

@property (nonatomic, copy) NSString *localIcon;

@end

@interface policyList : NSObject

@property (nonatomic, copy) NSString *policyId;//政策ID

@property (nonatomic, copy) NSString *policyTitle;//政策标题

@property (nonatomic, copy) NSString *policySubtitle;//政策副标题

@property (nonatomic, copy) NSString *policyIcon;//政策图标

@property (nonatomic, copy) NSString *policyDescription;//政策说明

@property (nonatomic, copy) NSString *policyPlanAmount;//政策原计划售价（产品计划售价总和）

@property (nonatomic, copy) NSString *policySellAmount;//政策实际售价（产品实际售价总和）

@property (nonatomic, copy) NSString *policyReduction;//政策票价立减金额（产品里票价立减金额，正数）

@property (nonatomic, copy) NSString *beforeReduction;//立减前政策售价=policySellAmount+policyReduction

@property (nonatomic, copy) NSString *carfareReduction;//票价立减后金额=price-policyReduction

@property (nonatomic, copy) NSString *saveAmount;//政策节省金额（policyPlanAmount-policySellAmount）

@property (nonatomic, strong) NSArray *policyProductList;//产品列表

@property (nonatomic,copy) NSArray *policyPackageList;//简化版产品列表

@property (nonatomic,copy) NSString *seatName;//坐席名称
@property (nonatomic,copy) NSString *seatCode;//坐席code
@property (nonatomic, copy) NSString *isShowCancel;//是否显示取消政策按钮（0不显示1显示）
@end

@interface ResponsePolicygetsell : NSObject

@property (nonatomic, copy) NSString *isSuccess;//是否成功(true：成功；false：失败)

@property (nonatomic, copy) NSString *errorCode;//异常码

@property (nonatomic, copy) NSString *errorMsg;//异常消息

@property (nonatomic, strong) NSArray *policyList;//政策数组

@end

NS_ASSUME_NONNULL_END
