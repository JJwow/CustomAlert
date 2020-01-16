//
//  RequestFlightchangeDetail.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/13.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestFlightchangeDetail : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *unionSerialId;//原单或改签单流水号

@end

NS_ASSUME_NONNULL_END
