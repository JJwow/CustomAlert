//
//  RequestCarPoolSubmitAppeal.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/2/25.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCarPoolSubmitAppeal : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;//会员Id
@property (nonatomic, strong) NSString *orderSerialId;//订单号
@property (nonatomic, strong) NSString *appealContent;//申诉内容
@property (nonatomic, strong) NSString *appealSource;//来源 2 取消申诉；3 服务完成申诉

@end

NS_ASSUME_NONNULL_END
