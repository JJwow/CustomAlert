//
//  ResponseGetOnlineUrl.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/7.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetOnlineUrl : TCTResponseObject

@property (nonatomic, strong) NSString *isVip;//是否是超级管家卡
@property (nonatomic, strong) NSString *url;//在线客服地址
@property (nonatomic, strong) NSString *tel;//400电话

@end

NS_ASSUME_NONNULL_END
