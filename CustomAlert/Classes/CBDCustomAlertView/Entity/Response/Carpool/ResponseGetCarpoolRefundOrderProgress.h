//
//  ResponseGetCarpoolRefundOrderProgress.h
//  CarBaDa
//
//  Created by John on 2018/11/4.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusRefoundProgress.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetCarpoolRefundOrderProgress : NSObject

@property (nonatomic,copy) NSString *dedAmount;//退票手续费

@property (nonatomic,copy) NSString *isSuccess;

@property (nonatomic,strong) NSMutableArray *progressItems;//节点列表

@property (nonatomic,copy) NSString *refoundAmount;//退款金额

@property (nonatomic,copy) NSString *title;

@end

NS_ASSUME_NONNULL_END
