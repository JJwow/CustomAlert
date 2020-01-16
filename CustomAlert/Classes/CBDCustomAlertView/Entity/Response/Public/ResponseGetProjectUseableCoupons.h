//
//  ResponseGetProjectUseableCoupons.h
//  CarBaDa
//
//  Created by 丁健 on 2018/8/15.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetProjectUseableCoupons : NSObject
@property (nonatomic, copy) NSArray *couponCollection;
@property (nonatomic, copy) NSString *validCount;//可用个数（非接口给）
@end

@interface couponCollection : NSObject
@property (nonatomic, copy) NSString *couponCode;//优惠券编号
@property (nonatomic, copy) NSString *couponName;//优惠券名称
@property (nonatomic, copy) NSString *startDate;//有效期开始日期
@property (nonatomic, copy) NSString *overdueDate;//过期日期
@property (nonatomic, copy) NSString *showAmount;//优惠券面值金额
@property (nonatomic, copy) NSString *useRule;//优惠券使用规则
@property (nonatomic, copy) NSString *isCanUse;//是否可用
@property (nonatomic, copy) NSString *isJoinRedPacket;//是否可与红包共用
@end
