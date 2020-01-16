//
//  RequestUpdatePayInfo.h
//  CarBaDa
//
//  Created by zhaitong on 2018/8/15.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
@interface coupons : NSObject
@property (nonatomic, strong) NSString *couponBatchCode;//组合券编码
@property (nonatomic, strong) NSString *isBuy;//是否购买
@property (nonatomic, strong) NSString *couponType;//0优惠券，1酒店券
@end
@interface RequestUpdatePayInfo : TCTRequestObject
@property (nonatomic, strong) NSString *serialId;//订单号
@property (nonatomic, strong) NSArray *coupons;//优惠券批次列表
@end
