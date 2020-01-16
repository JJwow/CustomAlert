//
//  ResponseGetbusschedule.h
//  CarBaDa
//
//  Created by Alex on 6/11/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageInfo.h"
#import "TCGlobal.h"
#import "Responsegetevaluationinfo.h"

@interface ResponseGetbusschedule : NSObject
@property (nonatomic,strong) NSMutableArray *scheduleList;
@property (nonatomic,strong) NSArray *categoryList;//车次搜索结果各个维度集合（出发车站、到达车站、出发时段）
@property (nonatomic,strong) pageInfo *pageInfo;
@property (nonatomic,strong) NSString *isReturn;
@property (nonatomic,strong) NSString *recOtherLine;//推荐其他出发站的车次    0不推荐 1推荐
@property (nonatomic, strong) NSString *lineRemark;//线路提示文案
@property (nonatomic, strong) NSString *maxSaleDay;//最大可售天数
@property (nonatomic, strong) NSString *queryResultRemark;//线路查询结果文案说明
@property (nonatomic, strong) NSString *queryResultType;//线路查询类型 1000 正常，1001出发站推荐，1002到达推荐，2000未找到出发，2001未找到到达，2002未找到班次
@end

@interface scheduleList : NSObject
@property (nonatomic,strong) NSString *coachType;//车型大型高一
@property (nonatomic,strong) NSString *coachNo;//车次
@property (nonatomic,strong) NSString *departure;//出发地
@property (nonatomic,strong) NSString *destination;//到达地
@property (nonatomic,strong) NSString *dptStation;//出发站
@property (nonatomic,strong) NSString *arrStation;//    到达站
@property (nonatomic,strong) NSString *dptDateTime;//发车日期+时间
@property (nonatomic,strong) NSString *dptDate;//    发车日期
@property (nonatomic,strong) NSString *dptTime;//发车时间
@property (nonatomic,strong) NSString *isCustom;//是否定制客运   1是0不是
@property (nonatomic,strong) NSString *isPassingStation;//是否途经站 1是0不是
@property (nonatomic,strong) NSString *ticketPrice;//票价
@property (nonatomic,strong) NSString *childPrice;//    童票价
@property (nonatomic,strong) NSString *ticketFee;//供应商手续费
@property (nonatomic,strong) NSString *ticketLeft;//剩余车票数
@property (nonatomic,strong) NSString *canBooking;//是否可预订    1:可预定 0:不可预定,2-预约购票（如：先付款后出票）
@property (nonatomic,strong) NSString *bookingType;
@property (nonatomic,strong) NSString *timePeriodType;
@property (nonatomic,strong) NSString *distance;//行车路程
@property (nonatomic,strong) NSString *dptStationAddress;//出发站地址
@property (nonatomic,strong) NSString *endOperationTime;//结束运营时间
@property (nonatomic,strong) NSString *isScrollCoach;//是否流水班    0不是1是
@property (nonatomic,strong) NSString *passingStation;//经停站
@property (nonatomic,strong) NSString *isLocalSchedule;//是否本地线路    0：不是 1：是
@property (nonatomic,strong) NSString *lineType;//线路类型    0：普通班次 1：流水班次 2：途经班次 3：推荐班次
@property (nonatomic,strong) NSString *isSupportFreeChild;//是否支持携童票    0：不支持 1：支持
@property (nonatomic,strong) NSString *freeChildCount;//携童余票数
@property (nonatomic, strong) NSString *runThrough;//途径地区
@property (nonatomic, strong) NSString *runTime;//行车时间    约0.5小时
@property (nonatomic, strong) NSString *startStationCode;//始发站的编码
@property (nonatomic, strong) NSString *isCheckCode;//是否支持扫码检票（0-不支持 1-支持）

@property (nonatomic, strong) NSString *isShowBackup; //是否显示备选车次
@property (nonatomic, strong) NSString *remark;//备注信息
@property (nonatomic, strong) NSString *isCertificates;//是否支持多证件，1:支持；0:不支持
@property (nonatomic, strong) NSString *supplierKey;//供应商key
@property (nonatomic, strong) NSString *supplierAliasKey;
@property (nonatomic, strong) NSString *noBookType;//不可预订类型：0-仅查询；1-已过发车时间；2-暂停网售；3-已售罄。
@property (nonatomic, strong) NSString *lineId;//线路id
@property (nonatomic, strong) NSString *displayArrStation;//外显到达车站名称
@property (nonatomic, strong) NSString *shiftType;//0-普通班次；1-加班班次
@property (nonatomic, strong) NSArray *labelList;//标签数组(例如:免费接到站、商务舱座椅、免费矿泉水)
@end


@interface categoryItems : NSObject
@property (nonatomic,strong) NSString *itemId;
@property (nonatomic,strong) NSString *itemName;
//@property (nonatomic,strong) NSString *itemDisplayName;
@end

@interface categoryList : NSObject
@property (nonatomic,strong) NSString *categoryId;// 12 出发站  13 到达站  14 时段
@property (nonatomic,strong) NSString *categoryName;
@property (nonatomic,strong) NSArray *categoryItems;//维度内具体的类别集合
@property (nonatomic, copy) NSArray *resourceImage;//图片信息,酒店用

+(categoryList*)initWithItem:(categoryItems*)item type:(siftTypeEnum)type;

@end

