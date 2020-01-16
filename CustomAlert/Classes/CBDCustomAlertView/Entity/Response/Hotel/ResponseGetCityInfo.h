//
//  ResponseGetCityInfo.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/6/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface cityResource : NSObject

@property (nonatomic, copy) NSString *sid;
@property (nonatomic, copy) NSString *pid;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *shortName;
@property (nonatomic, copy) NSString *enName;
@property (nonatomic, copy) NSString *shortPrefix;
@property (nonatomic, copy) NSString *isShow;

@end

@interface ResponseGetCityInfo : TCTResponseObject

@property (nonatomic, strong)cityResource * cityResource;

@end
