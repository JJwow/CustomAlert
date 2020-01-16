//
//  ResponseGetCouponDetail.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/5/2.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ResponseGetCouponDetail : NSObject
@property (nonatomic, copy) NSString *ccType;//代金券类型
@property (nonatomic, copy) NSString *couponName;//代金券名称
@property (nonatomic, copy) NSString *price;//代金券单价
@property (nonatomic, copy) NSString *showAmount;//代金券抵扣金额
@property (nonatomic, copy) NSString *needAmount;//’需要满的金额，满XX金额
@property (nonatomic, copy) NSString *startDate;//有效期开始时间
@property (nonatomic, copy) NSString *overdueDate;//有效期结束时间
@property (nonatomic, copy) NSString *isJoinRedPacket;//是否可与红包使用，1-表示可以
@property (nonatomic, copy) NSString *useRule;//说明文案
@property (nonatomic, copy) NSString *couponCode;//券号

@end
