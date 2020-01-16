//
//  Responsegetpaystatement.h
//  CarBaDa
//
//  Created by Alex on 15/6/29.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface payitemlist : NSObject
@property (nonatomic,copy) NSString *payMethod;
@property (nonatomic,copy) NSString *payMethodName;
@property (nonatomic,copy) NSString *payMethodDesp;
@property (nonatomic,copy) NSString *canPay;
@property (nonatomic,copy) NSString *payMethodImgUrl;
@property (nonatomic,copy) NSString *activityImgUrl;
@property (nonatomic,copy) NSString *isAuthorize;//是否授权

@end

@interface Responsegetpaystatement : NSObject
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSMutableArray *payitemlist;
@end

