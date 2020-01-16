//
//  RequestCreateGrabOrder.h
//  CarBaDa
//
//  Created by Vic_Li on 2016/12/13.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "Requestcreatebusorder.h"
#import "RequestCreateTrainOrder.h"
#import "RequestCreateTrainOrder.h"
#import "AuthorizeWithholdView.h"

@interface grabOrderDetail : NSObject
@property (nonatomic, strong) NSString *fromStationCode;
@property (nonatomic, strong) NSString *fromStationName;//	出发站
@property (nonatomic, strong) NSString *grabCloseTime;//	抢票结束时间2016-10-06 12:12:00
@property (nonatomic, strong) NSString *mainSeatClass;//主坐席
@property (nonatomic, strong) NSString *mainTrainNo;//主车次
@property (nonatomic, strong) NSString *recentDptTime;//最近车次发车时间2016-10-02 08:12:00
@property (nonatomic, strong) NSString *toStationCode;//
@property (nonatomic, strong) NSString *toStationName;//到达站
@property (nonatomic, strong) NSString *trainDate;//发车日期	2016-10-02
@property (nonatomic, strong) NSArray *trainNo;//车次号集合，
@property (nonatomic, strong) NSArray *seatClasses;//坐席集合，
@property (nonatomic, strong) NSArray *multiGrabTime;//备选日期
@end

@interface RequestCreateGrabOrder : TCTRequestObject
@property (nonatomic, strong) NSString *accountNo;//12306账号
@property (nonatomic, strong) NSString *adultCount;//乘车成人人数
@property (nonatomic, strong) NSString *childCount;//	儿童人数
@property (nonatomic, strong) contactItem *contactItem;//联系人信息
@property (nonatomic, strong) grabOrderDetail *grabOrderDetail;//
@property (nonatomic, strong) NSString *memberId;//会员ID
@property (nonatomic, strong) NSString *memberPhone;//会员手机号码
@property (nonatomic, strong) NSString *orderType;//订单类型
@property (nonatomic, strong) packageDetail *packageDetail;//
@property (nonatomic, strong) NSMutableArray *passengerArray;//常旅LINDID集合
@property (nonatomic, strong) NSMutableArray *passengersList;
@property (nonatomic, strong) NSString *reductAmount;//优惠金额
@property (nonatomic, copy) NSString *ticketModel;//	购票方式  0代购(巴管) ，1自购（12306）
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *acceleratorPackCount;
@property (nonatomic, copy) NSString *payType;//支付方式 6:支付宝代扣 7:微信代扣
@property (nonatomic, copy) NSString *marketingId;//营销ID
@property (nonatomic, copy) NSString *selectSource;//保险购买类型
@property (nonatomic, copy) NSString *vipCardSpeedpackageCount;//管家权益加速包个数 V460
@property (nonatomic, copy) NSString *cardId;//管家卡ID V460
@property (nonatomic, copy) NSString *vipCardType;//管家卡类型 V480
@property (nonatomic, copy) NSString *vipCardAmount;//管家卡金额 V480
@property (nonatomic, copy) NSString *waitOrder;//候补下单， 0：否 1：是
- (instancetype)initWithChooseGuest:(NSMutableArray *)chooseGuest chooseChildrenGuest:(NSMutableArray *)chooseChildrenGuest phoneNumber:(NSString *)sPhoneNumber chooseInsurance:(packageList *)chooseInsurance buyInsuranceType:(NSString *)insuranceType b12306:(BOOL)b12306 queryKey:(NSString *)queryKey packCount:(NSString *)packCount payType:(CBDTicketWithholdType)payType vipCardSpeedCount:(NSString *)sVipCardSpeedCount vipCardID:(NSString *)sVipCardID cardType:(NSString *)cardType cardAmount:(NSString *)cardAmount isWaitOrder:(BOOL)isWaitOrder ;
@end
