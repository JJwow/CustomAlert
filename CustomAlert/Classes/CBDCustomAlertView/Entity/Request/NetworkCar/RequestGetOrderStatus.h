//
//  RequestGetOrderStatus.h
//  CarBaDa
//
//  Created by mini on 2018/11/1.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetOrderStatus : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;


@end
