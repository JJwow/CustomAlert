//
//  ResponseGetCouponpacks.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/8/14.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetCouponpacks : TCTResponseObject

@property (nonatomic, copy) NSArray *unionList;
@end


@interface unionList : NSObject

@property (nonatomic, copy) NSString *packBatchCode;//组合券批次号
@property (nonatomic, copy) NSString *packName;//组合券名称
@property (nonatomic, copy) NSString *packTag;//组合券标签
@property (nonatomic, copy) NSString *showAmount;//组合券外显价值
@property (nonatomic, copy) NSString *realCost;//组合券应付金额（实际售价）
@property (nonatomic, copy) NSString *reduceAmount;//优惠金额
@property (nonatomic, copy) NSString *isSelected;//是否选中
@property (nonatomic, copy) NSString *useRule;//使用规则
@property (nonatomic, copy) NSString *packSellAmount;//组合券外显售价

@end
