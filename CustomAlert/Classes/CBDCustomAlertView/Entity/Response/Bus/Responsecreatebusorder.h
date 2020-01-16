//
//  Responsecreatebusorder.h
//  CarBaDa
//
//  Created by Alex on 15/6/25.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Responsecreatebusorder : NSObject
@property (nonatomic,copy) NSString *isSucess;
@property (nonatomic,copy) NSString *description;
@property (nonatomic,copy) NSString *orderId;
@property (nonatomic,copy) NSString *orderSerialId;
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *payExpireDate;
@property (nonatomic,strong) NSArray *orderPayDetail;
@property (nonatomic,copy)NSString *payAmount;
@end
