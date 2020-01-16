//
//  ResponseFlightReceiptDetail.h
//  CarBaDa
//
//  Created by zjb on 2019/4/29.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseFlightReceiptDetail : NSObject
@property (nonatomic, strong) NSString *province;//
@property (nonatomic, strong) NSString *city;//
@property (nonatomic, strong) NSString *area;//
@property (nonatomic, strong) NSString *address;//
@property (nonatomic, strong) NSString *linkman;//
@property (nonatomic, strong) NSString *phone;//
@property (nonatomic, strong) NSString *mailState;//邮寄状态
@property (nonatomic, strong) NSString *mailStateDesc;//邮寄状态描述
@property (nonatomic, strong) NSString *mailNo;//快递单号
@end

NS_ASSUME_NONNULL_END
