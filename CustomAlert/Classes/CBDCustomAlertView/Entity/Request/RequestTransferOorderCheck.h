//
//  RequestTransferOorderCheck.h
//  CarBaDa
//
//  Created by likaikun on 2018/1/12.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@class transfers;

@interface RequestTransferOorderCheck : TCTRequestObject

@property (nonatomic, copy) NSString *seg0FromStation;//第一程出发站
@property (nonatomic, copy) NSString *seg0ToStation;//第一程到达站
@property (nonatomic, copy) NSString *seg0SeatCode;//第一程座次
@property (nonatomic, copy) NSString *seg0TrainDate;//  第一程发车日期
@property (nonatomic, copy) NSString *seg0TrainNo;//第一程车次

@property (nonatomic, copy) NSString *seg1FromStation;//第二程出发站
@property (nonatomic, copy) NSString *seg1SeatCode;//第二程座次
@property (nonatomic, copy) NSString *seg1ToStation;//第二程到达站
@property (nonatomic, copy) NSString *seg1TrainDate;//第二程发车日期
@property (nonatomic, copy) NSString *seg1TrainNo;//第二程车次

- (RequestTransferOorderCheck*)initWithTransfers:(transfers*)transfer;

@end
