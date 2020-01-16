//
//  ResponseGrabTicketGetTrains.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetTrain.h"

@interface ResponseGrabTicketGetTrains : NSObject
@property (nonatomic,strong) NSMutableArray *trains;//车次列表
@property (nonatomic,strong) pageInfo *pageInfo;
@property (nonatomic,strong) NSString *queryKey;
@property (nonatomic, copy) NSString *fromStationCityName;//v370起始站所对应的城市
@property (nonatomic, copy) NSString *fromStationCityId;//城市ID        V400
@end

