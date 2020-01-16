//
//  RequestCarpoolGetCharteredPosition.h
//  CarBaDa
//
//  Created by fly on 2018/11/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCarpoolGetCharteredPosition : TCTRequestObject

@property (nonatomic, copy) NSString *driverId;

@property (nonatomic, copy) NSString *timeStamp;

@property (nonatomic, copy) NSString *orderSerialId;

@end
