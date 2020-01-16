//
//  ResponseGetTrainStation.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/5/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetTrainStation : TCTResponseObject

@property (nonatomic,strong) NSMutableArray *trainStationList;

@end

@interface trainStationList : NSObject

@property(nonatomic, strong)NSString *lat;//纬度
@property(nonatomic, strong)NSString *lng;//经度
@property(nonatomic, strong)NSString *picPath;//车站图片
@property(nonatomic, strong)NSString *stationId;//车站id
@property(nonatomic, strong)NSString *stationName;//车站名称
@property(nonatomic, strong)NSString *address;//车站地址

@end
