//
//  Requestgetweichatpay.h
//  CarBaDa
//
//  Created by Alex on 15/6/30.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetweichatpay : TCTRequestObject
@property (nonatomic,strong) NSString *projectType;
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *orderSerialId;

-(instancetype)initWithProjectType:(NSString *)sProjectType;
@end
