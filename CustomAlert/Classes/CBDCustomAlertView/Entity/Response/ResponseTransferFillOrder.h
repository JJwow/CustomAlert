//
//  ResponseTransferFillOrder.h
//  CarBaDa
//
//  Created by likaikun on 2018/1/10.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@class seg0Train,seg1Train,tickets;

@interface ResponseTransferFillOrder : TCTResponseObject

@property (nonatomic, copy) NSString *note;//备注
@property (nonatomic, copy) NSString *tripNote;//预留时间不足
@property (nonatomic, copy) seg0Train *seg0Train;//第一程
@property (nonatomic, copy) seg1Train *seg1Train;//第二程
@property (nonatomic, copy) NSString *from0StationCityName;//第一层出发站所在的城市
@property (nonatomic, copy) NSString *from0StationCityId;//始发站0所对应的城市ID        V400
@property (nonatomic, copy) NSString *from1StationCityName;//第二层出发站所在的城市
@property (nonatomic, copy) NSString *from1StationCityId;//始发站1所对应的城市ID        V400
@property (nonatomic, copy) NSString *oneStationTransfer;//是否同站换乘
@property (nonatomic, copy) NSString *totalTime;//总时间
@property (nonatomic, copy) NSString *interval;//换乘时间间隔
@end

@interface seg0Train :NSObject
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, strong) NSArray *tickets; //座次
@property (nonatomic, copy) NSString *fromStationLat;
@property (nonatomic, copy) NSString *fromStationLon;
@property (nonatomic, copy) NSString *toStationLat;
@property (nonatomic, copy) NSString *toStationLon;

@end

@interface seg1Train :NSObject
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, strong) NSArray *tickets; //座次
@property (nonatomic, copy) NSString *fromStationLat;
@property (nonatomic, copy) NSString *fromStationLon;
@property (nonatomic, copy) NSString *toStationLat;
@property (nonatomic, copy) NSString *toStationLon;

@end
