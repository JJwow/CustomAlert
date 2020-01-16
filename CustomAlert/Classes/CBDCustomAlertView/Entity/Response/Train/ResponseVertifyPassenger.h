//
//  ResponseVertifyPassenger.h
//  CarBaDa
//
//  Created by zhaitong on 2017/6/8.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface failedPassengers :NSObject
@property (nonatomic, copy) NSString *cardNo;//证件号
@property (nonatomic, copy) NSString *cardType;//证件类型
@property (nonatomic, copy) NSString *passengerName;//乘客姓名
@property (nonatomic, copy) NSString *passengerType;//乘客类型
@end

@interface ResponseVertifyPassenger : NSObject
@property (nonatomic, copy) NSString *note;//提示内容
@property (nonatomic, copy) NSString *resultCode;//是否成功 1成功 0失败
@property (nonatomic, copy) NSString *supportDelivered;//是否支持送票上门	 1支持 0 不支持
@property (nonatomic, strong) NSArray *failedPassengers;
@end
