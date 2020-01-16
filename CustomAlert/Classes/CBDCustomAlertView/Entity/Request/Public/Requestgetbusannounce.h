//
//  Requestgetbusannounce.h
//  CarBaDa
//
//  Created by Alex on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetbusannounce : TCTRequestObject
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *dataNum;
@property (nonatomic,strong) NSString *cityName;
@property (nonatomic, strong) NSString *type;//火车票日历公告传1
@end
