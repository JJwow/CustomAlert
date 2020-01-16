//
//  ResponseCreateSpeedPackOrder.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/5.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseCreateSpeedPackOrder : NSObject
@property (nonatomic, copy) NSString *serialId;//加速包订单流水号
@property (nonatomic,strong) NSArray *detail;//详情
@property (nonatomic, copy) NSString *failMsg;//失败描述
@property (nonatomic, strong) NSString *payExpireDate;//支付过期时间
@property (nonatomic, copy) NSString *maxBuySpeedPack;//最大可购买份数
@end

NS_ASSUME_NONNULL_END
