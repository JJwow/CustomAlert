//
//  ResponseGetDiscountList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/23.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface discounts : NSObject
@property (nonatomic, copy) NSString *discountType;//优惠类型（1，优惠券、2，红包）
@property (nonatomic, copy) NSString *name;//名称
@property (nonatomic, copy) NSString *deductibleAmount;//抵用金额
@property (nonatomic, copy) NSString *needAmount;//满多少金额抵用
@property (nonatomic, copy) NSString *batchLabel;//标签
@property (nonatomic, copy) NSString *startDate;//有效期开始时间
@property (nonatomic, copy) NSString *endDate;//有效期结束时间

@end



@interface ResponseGetDiscountList : NSObject
@property (nonatomic, copy) NSArray *discounts;
@end
