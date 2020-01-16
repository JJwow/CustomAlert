//
//  RequestGetTravelItineraryPDF.h
//  CarBaDa
//
//  Created by zhaitong on 2019/10/29.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetTravelItineraryPDF : TCTRequestObject
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, strong) NSString *invoiceSerialId;
@end

NS_ASSUME_NONNULL_END
