//
//  ResponseIsCanChangeTicket.h
//  CarBaDa
//
//  Created by 丁健 on 16/9/1.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface passenger : NSObject
@property (nonatomic, strong) NSString *birthday;//乘客生日
@property (nonatomic, strong) NSString *idCard;//证件号
@property (nonatomic, strong) NSString *idType;//证件类型
@property (nonatomic, strong) NSString *name;//乘客名字
@property (nonatomic, strong) NSString *passengerType;//乘客类型
@property (nonatomic, strong) NSString *passengerTypeName;//乘客类型名字
@property (nonatomic, strong) NSString *seatNo;//座位号
@property (nonatomic, strong) NSString *seatType;//座位类型
@property (nonatomic, strong) NSString *sex;//性别
@property (nonatomic, strong) NSString *ticketPrice;//票价
@property (nonatomic, strong) NSString *insPrice;//保险单价
@property (nonatomic, strong) NSString *insuranceAmount;//保险金额
@property (nonatomic, strong) NSString *insuranceId;//保险类型ID

@end

@interface ResponseIsCanChangeTicket : NSObject
@property (nonatomic,strong) NSString *failMsg;//失败原因
@property (nonatomic,strong) NSString *fromDate;//发车日期
@property (nonatomic,strong) NSString *fromStationName;//出发站名字
@property (nonatomic,strong) NSString *fromTime;//发车时间
@property (nonatomic,strong) NSString *isCanChangeTicket;//能否改签	0：否 1：可改签
@property (nonatomic,strong) NSString *orderId;//订单ID
@property (nonatomic,strong) passenger *passenger;//乘客实体
@property (nonatomic,strong) NSString *runTimeSpan;//历经时间
@property (nonatomic,strong) NSString *seatName;//座位名称
@property (nonatomic,strong) NSString *seatType;//座位类型
@property (nonatomic,strong) NSString *ticketPrice;//车票价格
@property (nonatomic,strong) NSString *toDate;//到达日期
@property (nonatomic,strong) NSString *toStationName;//到达站名字
@property (nonatomic,strong) NSString *toTime;//到达时间
@property (nonatomic,strong) NSString *trainNo;//车次号
@property (nonatomic, strong) NSString *acceptNoSeat;//是否接受无座
@property (nonatomic, strong) NSString *accountNo;//12306账号
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *memberPhone;//会员手机号
@property (nonatomic, strong) NSString *ticketModel;//购票模式
@property (nonatomic, strong) NSString *insuranceAmount;//保险金额
@property (nonatomic, strong) NSString *headNote;//头部展示
@property (nonatomic, copy)NSString *isSuccess;
@end
