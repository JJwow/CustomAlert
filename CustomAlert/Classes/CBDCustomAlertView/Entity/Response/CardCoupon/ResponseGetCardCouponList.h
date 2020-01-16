//
//  ResponseGetCardCouponList.h
//  CarBaDa
//
//  Created by Jabir on 15/10/21.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"

@interface memberCardResponseList : NSObject

@property (nonatomic,copy)NSString *cardCode;//优惠码
@property (nonatomic,copy)NSString *cardName;//卡券名称
@property (nonatomic, copy) NSString *createTime;//创建时间
@property (nonatomic,copy)NSString *startDate;//有效开始时间
@property (nonatomic,copy)NSString *overdueDate;//过期时间
@property (nonatomic,copy)NSString *isUsed;//是否已使用
@property (nonatomic,copy)NSString *isExpired;//	是否过期
@property (nonatomic,copy)NSString *isActive;//是否失效
@property (nonatomic,copy)NSString *logoPic;//商户标志图片地址
@property (nonatomic, copy) NSString *memberCardType;//优惠券类型  0卡券 1代金券
@property (nonatomic, copy) NSString *deductibleAmount;//代价券金额
@property (nonatomic, copy) NSString *needAmount;//需要满的金额，满XX金额
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic, copy) NSString *isRedPgt;//是否可与红包使用，1-表示可以
@property (nonatomic, copy) NSString *state;//代金券状态 0-无效；1-有效；2-过期；3-已使用；4-已退订
@property (nonatomic, copy) NSString *lowPriceType;//最低价格类型 0 订单总额
@property (nonatomic, copy) NSString *usedDate;//使用日期

@end

@interface ResponseGetCardCouponList : NSObject

@property (nonatomic,strong)NSMutableArray *memberCardResponseList;
@property (nonatomic,strong)pageInfo *pageInfo;

@end
