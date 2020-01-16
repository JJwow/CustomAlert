//
//  ResponseGetHotelDealProgress.h
//  CarBaDa
//
//  Created by 丁健 on 2017/5/4.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResponseGetHotelDealProgress : NSObject
@property (nonatomic, copy) NSString *dedAmount;//	退票手续费
@property (nonatomic, copy) NSString *isSuccess;//	当前价格
@property (nonatomic, copy) NSArray *progressItems;//	节点列表
@property (nonatomic, copy) NSString *refoundAmount;//	退款金额
@property (nonatomic, copy) NSString *title;//	标题
@end

