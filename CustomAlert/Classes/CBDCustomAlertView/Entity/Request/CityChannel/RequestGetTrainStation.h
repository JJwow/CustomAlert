//
//  RequestGetTrainStation.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/5/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainStation : TCTRequestObject
@property (nonatomic,copy) NSString *locationId;//定位城市的id
@end
