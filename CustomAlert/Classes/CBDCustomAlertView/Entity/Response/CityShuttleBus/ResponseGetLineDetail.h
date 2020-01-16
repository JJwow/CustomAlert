//
//  ResponseGetLineDetail.h
//  CarBaDa
//
//  Created by LZQ on 15/12/31.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

/**
 *  	"shiftItems":[
 {
 "lineId":"6",
 "shiftInfoId":"3",
 "code":"KK5321",
 "departTime":"08:00",
 "tickets":"余47",
 "price":"20.00",
 "isCanBooking":"0"
 }
 ],
 */
@interface shiftItems : NSObject

@property(nonatomic, strong)NSString *lineId;
@property(nonatomic, strong)NSString *shiftInfoId;//班次ID - 新加
@property(nonatomic, strong)NSString *dptDateTime;
@property(nonatomic, strong)NSString *tickets;//余票数
@property(nonatomic, strong)NSString *ticketNum;
@property(nonatomic, strong)NSString *ticketPrice;//票价
@property(nonatomic,strong) NSString *coachType;//车次类型
@property(nonatomic, strong)NSString *isCanBooking;//是否可预订
@property(nonatomic, strong)NSString *dptStationCode;
@property(nonatomic, strong)NSString *scheduleInfoId;
@property(nonatomic, strong)NSString *coachNo;

@end


@interface startPoints : NSObject

@property(nonatomic, strong)NSString *lineId;
@property(nonatomic, strong)NSString *name;
@property(nonatomic, strong)NSString *pointId;
@property(nonatomic, strong)NSString *address;
@property(nonatomic, strong)NSString *thumbUrl;
@property(nonatomic, strong)NSString *type;
@property(nonatomic, strong)NSString *intervals;
@property(nonatomic, strong)NSString *startOrStop;
@property(nonatomic, strong)NSString *sortIndex;

@end

@interface endPoints : NSObject

@property(nonatomic, strong)NSString *lineId;
@property(nonatomic, strong)NSString *name;
@property(nonatomic, strong)NSString *pointId;
@property(nonatomic, strong)NSString *address;//站点地址
@property(nonatomic, strong)NSString *thumbUrl;
@property(nonatomic, strong)NSString *type;//站点类型
@property(nonatomic, strong)NSString *intervals;//离始发站间隔时间 分
@property(nonatomic, strong)NSString *startOrStop;//0 普通点 1 起点站 2 终点站
@property(nonatomic, strong)NSString *sortIndex;//排序号

@end

@interface regularExpressLinePoints : NSObject

@property(nonatomic, strong)NSArray *startPoints;//上车点
@property(nonatomic, strong)NSArray *endPoints;//下车点

@end

@interface ResponseGetLineDetail : TCTResponseObject

@property(nonatomic,strong) NSString* lineDistance;
@property(nonatomic,strong) NSString *ticketPrice;//票价
@property(nonatomic, strong)NSString *mapUrl;//地图地址
@property(nonatomic, strong)NSString *supplierKey;//供应商Id
@property(nonatomic, strong)NSArray *shiftItems;
@property(nonatomic, strong)regularExpressLinePoints *regularExpressLinePoints;
@property(nonatomic, strong)NSString *isSuccess ;

@end