//
//  ResponseGetActiveCouponList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/4/28.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"

@interface cashCouponList : NSObject
@property (nonatomic, copy) NSString *couponCode;//代金券批次号
@property (nonatomic, copy) NSString *ccType;//代金券类型
@property (nonatomic, copy) NSString *couponNo;//代金券编号
@property (nonatomic, copy) NSString *ccName;//代金券名称
@property (nonatomic, copy) NSString *deductibleAmount;//代金券抵扣金额
@property (nonatomic, copy) NSString *needAmount;//’需要满的金额，满XX金额
@property (nonatomic, copy) NSString *lowPriceType;//最低价格类型 0 订单总额
@property (nonatomic, copy) NSString *startDate;//有效期开始时间
@property (nonatomic, copy) NSString *endDate;//有效期结束时间
@property (nonatomic, copy) NSString *desp;//代金券描述
@property (nonatomic, copy) NSString *canUse;//是否可用
@property (nonatomic, copy) NSString *isRedPgt;//是否可与红包使用，1-表示可以

//填写页优惠券购买新增
@property (nonatomic,strong) NSString *ccId;
@property (nonatomic,strong) NSString *ccPrice;
@property (nonatomic,strong) NSString *isSelected;
@property (nonatomic, strong) NSArray *ruleDesc;//代金券描述
@end

@interface ResponseGetActiveCouponList : NSObject
@property (nonatomic, strong) NSMutableArray *cashCouponList;
@property (nonatomic,strong) pageInfo *pageInfo;
@end
