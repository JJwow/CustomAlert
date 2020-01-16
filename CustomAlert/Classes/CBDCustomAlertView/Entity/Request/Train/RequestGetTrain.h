//
//  Requestgettrain.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/23.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
#import "ResponseGetTrain.h"

@interface RequestGetTrain : TCTRequestObject

@property (nonatomic,strong) NSArray* traincategoryList;//筛选分类	11车次类型；12发车时段；13到达时段；14出发车站；15到达车站
@property (nonatomic,copy) NSString *fromStation;//出发站拼音 2.1改为传车站名称
@property (nonatomic,copy) NSString *fromStationType;//出发站类型 1车站 2 城市        V410
@property (nonatomic,copy) NSString *pageIndex;
@property (nonatomic,copy) NSString *pageSize;
@property (nonatomic,copy) NSString *sortType;//排序方式	0:出发时间升序,1:出发时间降序 2:行程耗时升序 3:行程耗时降序
@property (nonatomic,copy) NSString *toStation;//到达站拼音 2.1改为传车站名称
@property (nonatomic,copy) NSString *toStationType;//到达站类型 1车站 2 城市        V410
@property (nonatomic,copy) NSString *trainDate;//发车日期	2015-11-24
@property (nonatomic,copy) NSString *isChangeTicket;//是否改签单
@property (nonatomic,copy) NSString *isHaveTicket;//是否有票
@property (nonatomic,copy) NSString *isTransfer;//是否中转（更换车次）
@property (nonatomic,copy) NSString *queryOnly;//是否高铁 传"only"

@property (nonatomic, copy) NSString *isGrabTicket; //是否抢票查询
@property (nonatomic, copy) NSString *isStudentTicket;//是否学生票 0否1是	~262
@property (nonatomic, copy) NSString *selectSeatType;//选座类型	1指定下铺 2高铁选座 3指定靠窗	~263
@end
//fromStationType    出发站类型 1车站 2 城市        V410
//toStationType    到达站类型 1车站 2 城市        V410

