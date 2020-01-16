//
//  ResponseGetlineprice.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface carPoolPriceList : NSObject

@property (nonatomic, copy) NSString *carPoolTypeName;//拼车类型名称

@property (nonatomic, copy) NSString *carPoolType;//拼单类型    0:普通拼;1:2人拼;2:3人拼;3:4人包,4:6人包

@property (nonatomic, copy) NSString *price;//基础价格    拼车按人计算，包车按单计算

@property (nonatomic, copy) NSString *activityReduction;//活动价    拼车按人计算，包车按单计算

@property (nonatomic, copy) NSString *couponAmount;//红包金额

@property (nonatomic, copy) NSString *couponCode;//红包码

@property (nonatomic, copy) NSString *activityName;//活动名称

@property (nonatomic, copy) NSString *isRecommend;//是否推荐    0 否；1 是

@property (nonatomic, copy) NSString *selectedDescribe;//选中文案(支付后，系统将匹配相近时间路线乘客和您同乘)

@property (nonatomic, copy) NSString *isSelected;//是否选中    0 否；1 是

@property (nonatomic, copy) NSString *payAmount;//支付金额

@property (nonatomic, copy) NSString *carSeats;//包车座位数

@property (nonatomic, copy) NSString *unitPrice;//单人票价

@property (nonatomic, copy) NSString *passKmPrice;//超公里价    按公里计价

@property (nonatomic, copy) NSString *dptRangePrice;//上车点范围加价    按范围计价

@property (nonatomic, copy) NSString *arrRangePrice;//下车点范围加价    按范围计价

@property (nonatomic, copy) NSString *payMode;//付款模式    0 预支付； 1 后支付

@end

@interface ResponseGetlineprice : NSObject

@property (nonatomic, copy) NSString *isSuccess;//1成功

@property (nonatomic, copy) NSString *lineId;//线路Id

@property (nonatomic, copy) NSString *passKmPrice;//超公里价    按公里计价

@property (nonatomic, copy) NSString *tripKilometre;//行程公里    按公里计价

@property (nonatomic, copy) NSString *priceRule;//计价规则    0:按范围计价,1:按公里计价

@property (nonatomic, copy) NSString *queryKey;//

@property (nonatomic, copy) NSString *passRegion;//超范围    0 否； 1 上车点超；2 下车点超；3 上下车点超；

@property (nonatomic, copy) NSString *dptRangePrice;//上车点范围加价    按范围计价

@property (nonatomic, copy) NSString *arrRangePrice;//下车点范围加价    按范围计价

@property (nonatomic, copy) NSString *desp;//错误描述

@property (nonatomic, strong) NSMutableArray *carPoolPriceList;//价格

@end

NS_ASSUME_NONNULL_END
