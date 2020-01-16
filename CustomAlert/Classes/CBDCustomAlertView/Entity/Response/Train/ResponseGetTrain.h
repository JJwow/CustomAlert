//
//  Responsegettrain.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/23.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCGlobal.h"
#import "PageInfo.h"

typedef enum trainSeatType {
    hardseat = 1,           // 1:硬座
    softseat = 2,           // 2:软座
    firstseat  = 3,         // 3:一等座
    secondseat  = 4,        // 4:二等座
    hardsleeperup=5,        // 5:硬卧上铺
    hardsleepermid=6,       // 6:硬卧中铺
    hardsleeperdown=7,      // 7:硬卧下铺
    softsleeperup=8,        // 8:软卧上铺
    softsleeperdown=9,      // 9:软卧下铺
    noseat=10,              // 10:无座
    businessseat=11,        // 11:商务座
    specialseat=12,         // 12:特等座
    otherseat=13,           // 13:其它
    advancedsoftsleeper=14  // 14:高级软卧
}trainSeatType;

@interface busRecommend : NSObject
@property (nonatomic, strong) NSString *endPlace;//到达城市
@property (nonatomic, strong) NSString *price;//价格
@property (nonatomic, strong) NSString *startPlace;//出发城市
@property (nonatomic, strong) NSString *productType;//产品类型
@property (nonatomic, strong) NSString *iconUrl;//图片地址
@end

@interface transfers : NSObject
@property (nonatomic,copy) NSString *interval;//换乘间隔时间
@property (nonatomic,copy) NSString *oneStationTransfer;//是否同站换乘
@property (nonatomic,copy) NSString *seg0FromStation;// 第一程出发站
@property (nonatomic,strong) NSString *seg0FromDate;//出发日期
@property (nonatomic,copy) NSString *seg0FromTime;//第一程出发时间
@property (nonatomic,copy) NSString *seg0Price;//第一程价格
@property (nonatomic,copy) NSString *seg0RunTimeSpan;//第一程耗时
@property (nonatomic,copy) NSString *seg0SeatName;//第一程座次
@property (nonatomic,copy) NSString *seg0ToStation;//第一程到达站
@property (nonatomic,copy) NSString *seg0ToDate;//第一程到达日期
@property (nonatomic,copy) NSString *seg0ToTime;//第一程到达时间
@property (nonatomic,copy) NSString *seg0TrainNo;//第一程车次
@property (nonatomic,copy) NSString *seg0QueryKey;//第一程QueryKey（非接口给）
@property (nonatomic,copy) NSString *seg0SeatCode;//第一程座位类型（非接口给）

@property (nonatomic,copy) NSString *seg1FromStation;//第二程出发站
@property (nonatomic,strong) NSString *seg1FromDate;//出发日期
@property (nonatomic,copy) NSString *seg1FromTime;//第二程出发时间 HH:mm
@property (nonatomic,copy) NSString *seg1Price;//第二程价格
@property (nonatomic,copy) NSString *seg1RunTimeSpan;//第二程耗时
@property (nonatomic,copy) NSString *seg1SeatName;//第二程座次
@property (nonatomic,copy) NSString *seg1ToStation;//第二程到达站
@property (nonatomic,strong) NSString *seg1ToDate;//到达日期    
@property (nonatomic,copy) NSString *seg1ToTime;//第二程到达时间
@property (nonatomic,copy) NSString *seg1TrainNo;//第二程车次
//第二程汽车
@property (nonatomic,copy) NSString *seg1CoachNo;//第二程车次号
@property (nonatomic,copy) NSString *seg1DptProvince;//第二程出发省
@property (nonatomic,copy) NSString *seg1DptCity;//第二程出发市
@property (nonatomic,copy) NSString *seg1DptArea;//第二程出发区
@property (nonatomic,copy) NSString *seg1ArrProvince;//第二程到达省
@property (nonatomic,copy) NSString *seg1ArrCity;//第二程到达市
@property (nonatomic,copy) NSString *seg1ArrArea;//第二程到达区
@property (nonatomic,copy) NSString *seg1arrStation;//
@property (nonatomic,copy) NSString *seg1departure;//
@property (nonatomic,copy) NSString *seg1destination;//
@property (nonatomic,copy) NSString *seg1dptDateTime;//
@property (nonatomic,copy) NSString *seg1dptStation;//
@property (nonatomic,copy) NSString *seg1supplierKey;//
@property (nonatomic,copy) NSString *seg1ticketPrice;//
@property (nonatomic,copy) NSString *totalPrice;//总价格
@property (nonatomic,copy) NSString *totalTime;//总耗时    分
@property (nonatomic,copy) NSString *transferCity;//中转城市
@property (nonatomic,copy) NSString *crossDate;//跨日期天数
@property (nonatomic,copy) NSString *transferType;// 中转类型 0火车转火车 1火车转汽车
@property (nonatomic,copy) NSString *seg1QueryKey;//第二程QueryKey（非接口给）
@property (nonatomic,copy) NSString *seg1SeatCode;//第二程座位类型（非接口给）
@property (nonatomic,copy) NSString *cacheEndDateTime;//缓存截止时间（非接口给）

//seg1arrStation    到达站
//seg1departure    出发地
//seg1destination    目的地
//seg1dptDateTime    出发时间
//seg1dptStation    出发站
//seg1supplierKey    供应商key
//seg1ticketPrice    票价
@end

@interface ResponseGetTrain : NSObject

@property (nonatomic,strong) NSMutableArray *trains;//车次列表
@property (nonatomic,copy) NSArray *traincategoryList;//筛选列表
@property (nonatomic,strong) pageInfo *pageInfo;
@property (nonatomic,strong) NSString *queryKey;
@property (nonatomic,copy) NSArray *transfers;//中转换乘
@property (nonatomic, strong) busRecommend *busRecommend;//汽车票推荐
@property (nonatomic,copy) NSString *tips;
@property (nonatomic,copy) NSString *needTransfer;//是否需要请求中转车次

//车次列表用（非接口给）
@property (nonatomic,strong) NSMutableArray *accurateSearchTrains;//精确搜索车次
@property (nonatomic,strong) NSMutableArray *noSearchTrains;//非精确搜索车次
@end

@interface trains : NSObject

@property (nonatomic,strong) NSString *bookState;//是否可预订	0否1是
@property (nonatomic,strong) NSString *fromPassType;//出发站是否过路站
@property (nonatomic,strong) NSString *fromStation;//出发站
@property (nonatomic,strong) NSString *fromStationCode;//出发站拼音
@property (nonatomic, copy) NSString *fromStationCityName;//v370始发站所对应的城市
@property (nonatomic, copy) NSString *fromStationCityId;//城市ID        V400
@property (nonatomic,strong) NSString *fromTime;//出发时间
@property (nonatomic,strong) NSString *miles;//公里数
@property (nonatomic,strong) NSString *note;//备注
@property (nonatomic,strong) NSString *pullInByIdCard;//是否可以刷身份证进站	0否1是
@property (nonatomic,copy) NSString *isFXH;//复兴号标识
@property (nonatomic,strong) NSString *runTimeSpan;//历经时间
@property (nonatomic,strong) NSString *runMinutes;//历经时间(分钟，接口原生数据runTimeSpan转移，非接口字段)
@property (nonatomic,strong) NSArray  *tickets;//票价信息
@property (nonatomic,strong) NSString *toPassType;//到达站是否过路站
@property (nonatomic,strong) NSString *toStation;//到达站
@property (nonatomic,strong) NSString *toStationCode;//到达站拼音
@property (nonatomic,strong) NSString *toTime;//到达时间
@property (nonatomic,strong) NSString *toDate;//到达日期
@property (nonatomic,strong) NSString *trainClass;//车次类型
@property (nonatomic,strong) NSString *trainNo;//车次号
@property (nonatomic,strong) NSString *crossDate;//跨日期天数
@property (nonatomic,strong) NSString *isCanGrab;//是否显示抢票按钮
@property (nonatomic,strong) NSString *rangTime;//补票区间时间    分钟数
@property (nonatomic,strong) NSString *transferStation;//中转站
@property (nonatomic,strong) NSString *transferStationCode;//中转站code
@property (nonatomic,strong) NSString *transferStationCount;//需补票或者多买的站数
@property (nonatomic,strong) NSString *transferType;//中转类型    1:提前，需补票， 2：延后，多买了
@property (nonatomic,strong) NSString *transferFromStation;//相对于于始发站,中转站的站名
@property (nonatomic,strong) NSString *transferFromStationCode;//相对于始发站，所对应的中转站code
@property (nonatomic,strong) NSString *transferFromStationCount;//相对于始发站补票或者多买的票数
@property (nonatomic,strong) NSString *transferFromStationType;//相对于始发站的中转类型。0:表示没有补票也没有延后，1:延后，需补票，2：提前，多买了    string    V400
@property (nonatomic,copy) NSString *isAccurateSearch;//1表示精确搜索的数据

@property (nonatomic,strong) NSString *fromDate;//出发日期（非接口给）
@end

@interface tickets : NSObject

@property (nonatomic,copy) NSString *seatCode;//座位类型
@property (nonatomic,copy) NSString *price;//座位票价
@property (nonatomic,copy) NSString *seatName;//座位名称
@property (nonatomic,copy) NSString *seats;//座位数
@property (nonatomic,copy) NSString *seatState;//座位是否可预订	0抢票， 1正常购买，2未开售
@property (nonatomic,copy) NSString *isTicketTight;//2.1之后版本使用 0、表示不弹出 1、表示弹出
@property (nonatomic,copy) NSString *isCanChangeTicket;//0：否 1：是 241	~241
@property (nonatomic,copy) NSString *isCanGrab;//是否显示抢票按钮 0不展示、1展示抢票、2候补抢票
@property (nonatomic,copy) NSString *isSelected;//是否选中	0:否 ,1：是
@property (nonatomic,copy) NSString *delivered;//是否支持送票上门 0:否 ,1：是
@property (nonatomic,copy) NSString *relatedDelivered;//是否关联送票上门    0:否，1:是    ~330
@property (nonatomic,copy) NSString *selectSeatType;//送票上门类型    1卧铺 3 靠窗 4 高铁选座    ~330
@property (nonatomic,copy) NSString *seatEncoding;//座位类型
@property (nonatomic,copy) NSString *couponPrice;//优惠券价格
@end

@interface traincategoryItems : NSObject

@property (nonatomic,strong) NSString *itemId;
@property (nonatomic,strong) NSString *itemName;

@property (nonatomic,assign) BOOL bSelected;//非接口给，筛选列表用
@end

@interface traincategoryList : NSObject

@property (nonatomic,strong) NSString *categoryId;
@property (nonatomic,strong) NSString *categoryName;
@property (nonatomic,strong) NSMutableArray *traincategoryItems;

+(traincategoryList*)initWithItemArray:(NSMutableArray*)array type:(trainSiftTypeEnum)type;

@end

@interface transferStationCategoryList : traincategoryList

@end



