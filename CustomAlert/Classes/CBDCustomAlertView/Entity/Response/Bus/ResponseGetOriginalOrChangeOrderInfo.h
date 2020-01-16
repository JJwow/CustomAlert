//
//  ResponseGetOriginalOrChangeOrderInfo.h
//  CarBaDa
//
//  Created by John on 2018/7/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetOriginalOrChangeOrderInfo : NSObject

@property (nonatomic, strong) NSMutableArray *orderInfoList;//原单或改签单订单信息

@end

@interface orderInfoList : NSObject

@property (nonatomic,strong) NSString *orderSerialId;//原单或改签单订单流水号

@property (nonatomic,strong) NSString *orderId;//原单或改签单订单号

@property (nonatomic,strong) NSMutableArray *passengerInfoList;//乘客信息集合

@end

@interface passengerInfoList : NSObject

@property (nonatomic,strong) NSString *passengerSerialId;//乘客流水号

@property (nonatomic,strong) NSString *name;//姓名

@property (nonatomic,strong) NSString *passengerType;//乘客类型 0 成人 1 儿童 2 老人 3 婴儿

@end
