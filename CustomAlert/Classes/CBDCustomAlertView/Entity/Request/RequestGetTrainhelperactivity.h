//
//  RequestGetTrainhelperactivity.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/6.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface RequestGetTrainhelperactivity : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *serialId;
@property (nonatomic, strong) NSString *activityNo;
@property (nonatomic, strong) NSString *remark;
@end

NS_ASSUME_NONNULL_END
