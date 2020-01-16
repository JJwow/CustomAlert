//
//  RequestTransferTrainToBus.h
//  CarBaDa
//
//  Created by 丁健 on 2018/6/26.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTransferTrainToBus : TCTRequestObject
@property (nonatomic, copy) NSString *seg0FromStation;//第一程出发站
@property (nonatomic, copy) NSString *seg0ToStation;//第一程到达站
@property (nonatomic, copy) NSString *seg0TrainDate;//第一程发车日期
@property (nonatomic, copy) NSString *seg0TrainNo;//第一程车次
@property (nonatomic, copy) NSString *seg1ArrArea;//到达站地区
@property (nonatomic, copy) NSString *seg1ArrCity;//
@property (nonatomic, copy) NSString *seg1ArrProvince;//
@property (nonatomic, copy) NSString *seg1BusDate;//第二程发车日期
@property (nonatomic, copy) NSString *seg1CoachNo;//汽车班次
@property (nonatomic, copy) NSString *seg1DptArea;//出发站地区
@property (nonatomic, copy) NSString *seg1DptCity;//
@property (nonatomic, copy) NSString *seg1DptProvince;//
@property (nonatomic,copy) NSString *seg1arrStation;//
@property (nonatomic,copy) NSString *seg1departure;//
@property (nonatomic,copy) NSString *seg1destination;//
@property (nonatomic,copy) NSString *seg1dptDateTime;//
@property (nonatomic,copy) NSString *seg1dptStation;//
@property (nonatomic,copy) NSString *seg1supplierKey;//
@property (nonatomic,copy) NSString *seg1ticketPrice;//
@end

