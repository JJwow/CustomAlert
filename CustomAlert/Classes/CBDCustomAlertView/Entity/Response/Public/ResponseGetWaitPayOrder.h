//
//  ResponseGetWaitPayOrder.h
//  CarBaDa
//
//  Created by 丁健 on 2018/12/3.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>



NS_ASSUME_NONNULL_BEGIN

@interface waitPayOrderList : NSObject
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *projectType;
@property (nonatomic, copy) NSString *dptStation;
@property (nonatomic, copy) NSString *arrStation;
@property (nonatomic, copy) NSString *dptDateTime;//出发时间
@property (nonatomic, copy) NSString *totalAmount;//支付金额
@property (nonatomic, copy) NSString *finishTime;//服务完成时间或取消时间
@end

@interface ResponseGetWaitPayOrder : NSObject
@property (nonatomic, copy) NSArray *waitPayOrderList;
@end

NS_ASSUME_NONNULL_END
