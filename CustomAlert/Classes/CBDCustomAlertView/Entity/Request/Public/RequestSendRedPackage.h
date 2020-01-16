//
//  RequestSendRedPackage.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/3/7.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSendRedPackage : TCTRequestObject

@property (nonatomic, copy)NSString *batchCode;
@property (nonatomic, copy)NSString *Phone;

@end

NS_ASSUME_NONNULL_END
