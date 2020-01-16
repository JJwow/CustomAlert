//
//  ResponseGetRefundProgress.h
//  CarBaDa
//
//  Created by zhaitong on 16/2/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetRefundProgress : NSObject
@property (nonatomic,copy)NSString *title;
@property (nonatomic,strong)NSArray *progressItems;
@property (nonatomic, copy) NSString *refoundAmount;//火车票中部分退款金额（只有部分退款才用）
@end
