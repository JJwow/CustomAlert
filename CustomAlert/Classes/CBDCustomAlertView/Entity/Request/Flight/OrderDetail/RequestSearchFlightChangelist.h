//
//  RequestSearchFlightChangelist.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestSearchFlightChangelist : TCTRequestObject

@property (nonatomic, strong) NSString *orderSerialId;//改签单流水号
@property (nonatomic, strong) NSString *memberId;//

@end

NS_ASSUME_NONNULL_END
