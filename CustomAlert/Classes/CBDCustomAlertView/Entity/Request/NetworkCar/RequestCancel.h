//
//  RequestCancel.h
//  CarBaDa
//
//  Created by mini on 2019/10/31.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCancel : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *orderStatus;

@end

NS_ASSUME_NONNULL_END
