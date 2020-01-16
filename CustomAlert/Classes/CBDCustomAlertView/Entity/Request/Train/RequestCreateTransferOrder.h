//
//  RequestCreateTransferOrder.h
//  CarBaDa
//
//  Created by 丁健 on 2018/1/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "TCGlobal.h"

@class contactItem;
@class packageDetail;
@class TicketItem;
@class transfers;
@class packageList;
@class memberCouponList;
//红包
@interface couponInfo : NSObject
@property (nonatomic,copy)NSString *couponAmount;//红包金额
@property (nonatomic,copy)NSString *couponCode;//红包编号
@end

//第一行程
@interface subOrder1 : NSObject
@property (nonatomic,copy)NSString *queryKey;//
@property (nonatomic,copy)NSString *seatType;//
@property (nonatomic,strong)TicketItem *TicketItem;//

@end

//第二行程
@interface subOrder2 : NSObject
@property (nonatomic,copy)NSString *queryKey;//
@property (nonatomic,copy)NSString *seatType;//
@property (nonatomic,strong)TicketItem *TicketItem;//
@end

@interface RequestCreateTransferOrder : TCTRequestObject
@property (nonatomic, copy) NSString *accountNo;//12306账号
@property (nonatomic, copy) NSString *adultCount;//成人乘客数量
@property (nonatomic, copy) NSString *childCount;//儿童乘客数量
@property (nonatomic, strong) contactItem *contactItem;//联系人信息
@property (nonatomic, strong) couponInfo *couponInfo;//红包
@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *memberPhone;//会员手机号
@property (nonatomic, strong) packageDetail *packageDetail;//套餐
@property (nonatomic, strong) NSMutableArray *passengerArray;//代购时巴管常旅id数组
@property (nonatomic, strong) NSMutableArray *passengersList;//自购时乘客列表
@property (nonatomic, strong) subOrder1 *subOrder1;//第一行程
@property (nonatomic, strong) subOrder2 *subOrder2;//第二行程
@property (nonatomic, copy) NSString *ticketModel;//购票方式    0.代购 1.自购（12306账号购票）
@property (nonatomic, copy) NSString *marketingId;//营销ID
@property (nonatomic, copy) NSString *selectSource;//购买保险类型

- (instancetype)initWithTicketInfo:(NSMutableArray *)guests transferInfo:(transfers *)transfer tel:(NSString *)sMobile insurance:(packageList *)chooseinsurance Coupon:(memberCouponList *)chooseCoupon childArray:(NSMutableArray *)children b12306Account:(TrainBookType)bookType bookState:(NSString *)bookState;

@end
