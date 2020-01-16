//
//  RequestVertify12306Info.h
//  CarBaDa
//
//  Created by zhaitong on 2019/8/22.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface RequestVertify12306Info : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *accountNo;
@end

NS_ASSUME_NONNULL_END
