//
//  ResponseGetlineinfo.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/3/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetlineinfo : NSObject

@property (nonatomic, copy) NSString *lineId;//线路Id

@property (nonatomic, copy) NSString *advanceTime;//提前预定时间

@property (nonatomic, copy) NSString *saleDays;//预售期

@property (nonatomic, copy) NSString *saleBegin;//开售日期

@property (nonatomic, copy) NSString *dptPassRange;//出发超范围    0 否； 1 是

@property (nonatomic, copy) NSString *arrPassRange;//到达超范围    0 否； 1 是

@property (nonatomic, copy) NSString *payMode;//付款模式    0 预支付； 1 后支付

@property (nonatomic, copy) NSString *showViewRange;//是否显示查看服务范围    0 否； 1 是

@property (nonatomic, copy) NSString *realName;//是否支持实名制    0 否； 1 是；

@property (nonatomic, copy) NSString *areaId;//库存模式区域id

@property (nonatomic, copy) NSString *saleBeginDate;//售卖开始日期

@property (nonatomic, copy) NSString *saleEndDate;//售卖结束日期

@end

NS_ASSUME_NONNULL_END
