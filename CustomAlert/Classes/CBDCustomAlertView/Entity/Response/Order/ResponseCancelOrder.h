//
//  ResponseCancelOrder.h
//  CarBaDa
//
//  Created by zhang on 15/7/4.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCancelOrder : NSObject
@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic, strong) NSString *isCanCancel;//是否可取消
@property (nonatomic, strong) NSString *canNotRefMsg;//不可取消原因
@end
