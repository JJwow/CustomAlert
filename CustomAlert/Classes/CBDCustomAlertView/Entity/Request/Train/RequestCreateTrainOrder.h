//
//  Requestcreatetrainorder.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/23.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseGetTrainNo.h"
#import "Responsegetredpackagelist.h"
#import "TCGlobal.h"
#import "ResponseGetMailInfos.h"
#import "ResponseGetPackages.h"
#import "Requestcreatebusorder.h"
#import "ResponseGetProjectUseableCoupons.h"
#import "AuthorizeWithholdView.h"

//联系人信息
@interface contactItem : NSObject
@property (nonatomic,copy)NSString *Email;//联系人邮箱
@property (nonatomic,copy)NSString *idCard;//联系人证件号
@property (nonatomic,copy)NSString *idType;//联系人证件类型
@property (nonatomic,copy)NSString *mobileNo;//联系人电话号码
@property (nonatomic,copy)NSString *name;//联系人姓名
@end

//乘客信息
@interface passengersList : NSObject
@property (nonatomic,copy)NSString *idCard;//乘客证件号
@property (nonatomic,copy)NSString *idType;//乘客证件类型
@property (nonatomic,copy)NSString *mobileNo;//乘客电话号码
@property (nonatomic,copy)NSString *name;//乘客姓名
@property (nonatomic,copy)NSString *passengerType;//乘客类型
@property (nonatomic,copy)NSString *sex;//乘客性别
@property (nonatomic, copy) NSString *birthday;//出生日期
@property (nonatomic, copy) NSString *idValidity;//证件号有效期
@property (nonatomic, copy) NSString *country;//国家CODE
@end

//车次信息
@interface TicketItem : NSObject
@property (nonatomic,copy)NSString *trainDate;//出发日期
@property (nonatomic,copy)NSString *trainNo;//车次编号
@property (nonatomic,copy)NSString *fromStationCode;//出发站编码
@property (nonatomic,copy)NSString *toStationCode;//到达站编码
@property (nonatomic, copy) NSString *fromStationName;//出发站名称
@property (nonatomic, copy) NSString *toStationName;//到达站名称
@property (nonatomic, copy) NSString *fromTime;//发车时间
@end

//火车下单邮寄地址
@interface postalInfo : NSObject
@property (nonatomic,copy)NSString *address;//邮寄人地址
@property (nonatomic,copy)NSString *cellphone;//邮寄人手机号
@property (nonatomic,copy)NSString *city;//邮寄人城市
@property (nonatomic,copy)NSString *district;//邮寄人区域
@property (nonatomic, copy) NSString *person;//邮寄人姓名
@property (nonatomic, copy) NSString *province;//邮寄人省份
@property (nonatomic, copy) NSString *zip;//邮寄人邮编
@end
//酒店券
@interface hotelCoupons : NSObject
@property (nonatomic,copy)NSString *couponCode;//券code		~262
@end

//优惠券
@interface cashCouponInfo : NSObject
@property (nonatomic,copy)NSString *couponCode;//优惠券code-V420
@end

//政策
@interface policyInfo : NSObject
@property (nonatomic,copy)NSString *policyId;
@property (nonatomic,copy)NSString *policyPrice;
@end

//在线选座
@interface customizeInfo : NSObject
@property (nonatomic,copy)NSString *acceptOtherSeat;//是否接受其他座位	0:否，1:是	~263
@property (nonatomic,copy)NSString *customizeContent;//定制的内容	customizeModel为1时，值为3/2，表示下铺两张 customizeModel为2时，值为1D|2F customizeModel为3时，值为靠窗座位的数量	~263
@property (nonatomic,copy)NSString *customizeModel;//定制类型	1:指定靠窗 2:高铁动车 3:卧铺	~263
@end

@interface oneYuanFree : NSObject
@property (nonatomic, copy) NSString *count;
@end

@interface RequestCreateTrainOrder : TCTRequestObject
@property (nonatomic,copy)NSString *acceptNoSeat;//是否接受无座	0，不接受 1，接受
@property (nonatomic,copy)NSString *accountNo;//12306账号，传则认为12306购票，否则巴士管家购票
@property (nonatomic,copy)NSString *adultCount;//乘车成人人数
@property (nonatomic,copy)NSString *childCount;//儿童人数
@property (nonatomic,copy)NSString *childPrice;//儿童票价
@property (nonatomic,strong)contactItem *contactItem;//联系人信息
@property (nonatomic,copy)NSString *couponAmount;//红包金额
@property (nonatomic,copy)NSString *couponCode;//红包号码
@property (nonatomic,strong)cashCouponInfo *cashCouponInfo;//优惠券信息-V420
@property (nonatomic,copy)NSString *insuranceAmount;//保险金额
@property (nonatomic,copy)NSString *insurancePrice;//保险单价
@property (nonatomic,copy)NSString *insuranceId;//保险类型
@property (nonatomic,copy)NSString *memberId;//会员ID
@property (nonatomic,strong)NSMutableArray *passengersList;//乘客信息
@property (nonatomic,strong)NSMutableArray *passengerArray;//乘客信息
@property (nonatomic,copy)NSString *queryKey;//查询key
@property (nonatomic,copy)NSString *reductAmount;//立减金额
@property (nonatomic,copy)NSString *seatType;//座位类型
@property (nonatomic,strong)TicketItem *TicketItem;//车次信息
@property (nonatomic,copy)NSString *ticketPrice;//单张票价
@property (nonatomic,copy)NSString *totalAmount;//订单金额
@property (nonatomic,copy)NSString *memberPhone;
@property (nonatomic,copy)NSString *ticketModel;//购票方式 0.巴士管家购票 1.（12306账号购票）
@property (nonatomic,strong) postalInfo *postalInfo;
@property (nonatomic, copy) NSString *isChangeTicket;//是否为改签单
@property (nonatomic, copy) NSString *oldTicketSerialId;//原单订单号
@property (nonatomic, copy) NSString *oldTicketPassengerId;//原单乘客id
@property (nonatomic, copy) NSString *FromTime;//发车时间
@property (nonatomic, copy) NSString *orderType;//项目类型	7：火车票项目	~250
@property (nonatomic, copy) NSString *isBuyOneyuanFree;//是否购买一元免单 ~260
@property (nonatomic, copy) NSString *isPost;//是否需要邮寄	0：不需要，1：需要 ~261
@property (nonatomic, strong) packageDetail *packageDetail;//套餐明细		~250
@property (nonatomic, strong) NSMutableArray *hotelCoupons;//酒店券列表		~262
@property (nonatomic, copy) NSString *isStudent;//是否是学生票		~262
@property (nonatomic, strong) customizeInfo *customizeInfo;//是否是学生票		~262
@property (nonatomic, strong) oneYuanFree *oneYuanFree;
@property (nonatomic, copy) NSString *marketingId;//营销ID
@property (nonatomic, copy) NSString *selectSource;//购买保险类型
@property (nonatomic, copy) NSString *unionOrderType;//订单中转类型（0：非中站单，2：火车转汽车）
@property (nonatomic, copy) NSString *payType;
@property (nonatomic, copy) NSString *cardId;//超级管家卡
@property (nonatomic, copy) NSString *ticketLoseCount;//超级管家卡立减
@property (nonatomic, copy) NSString *cashHotelCouponBatchCode;//优享预订code
@property (nonatomic, copy) NSString *cashCouponType;//优享预订 现金优惠券类型
@property (nonatomic, strong) policyInfo *policyInfo;//是否是学生票        ~262
@property (nonatomic, copy) NSString *vipCardType;//管家卡类型
@property (nonatomic, copy) NSString *vipCardAmount;//管家卡金额

- (instancetype)initChangeTrainOrder;//创建改签单（初始化）
- (instancetype)initWithTicketInfo:(NSMutableArray *)guests queryKey:(NSString *)sQueryKey ticketinfo:(trains *)ticketinfo ticket:(tickets *)ticket tel:(NSString *)sMobile insurance:(packageList *)chooseinsurance Coupon:(memberCouponList *)chooseCoupon cashDiscount:(couponCollection *)cashDiscount childArray:(NSMutableArray *)children b12306Account:(TrainBookType)bookType mailInfo:(mailList *)mailInfo customizeInfo:(customizeInfo *)customInfo isStudent:(BOOL)bStudent buyOneyuanFreeCount:(NSInteger)oneYuanFreeCount bPost:(BOOL)bPost bookState:(NSString *)bookState unionOrderType:(NSString *)unionOrderType payType:(CBDTicketWithholdType)payType bgCardId:(NSString *)bgCardId bgCardDiscount:(NSString *)bgCardDiscount moneyBookCode:(NSString *)moneyBookCode moneyBookCouponType:(NSString *)moneyBookCouponType policyList:(policyList *)policy vipCardType:(NSString *)vipCardType vipCardAmount:(NSString *)vipCardAmount;
@end
