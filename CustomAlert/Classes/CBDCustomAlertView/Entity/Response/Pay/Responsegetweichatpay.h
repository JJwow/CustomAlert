//
//  Responsegetweichatpay.h
//  CarBaDa
//
//  Created by Alex on 15/6/30.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Responsegetweichatpay : NSObject
@property (nonatomic,strong) NSString *partnerId;
@property (nonatomic,strong) NSString *prepayId;
@property (nonatomic,strong) NSString *packageValue;
@property (nonatomic,strong) NSString *nonceStr;
@property (nonatomic,strong) NSString *timeStamp;
@property (nonatomic,strong) NSString *sign;
@property (nonatomic,strong) NSString *isSuccess;
@end
