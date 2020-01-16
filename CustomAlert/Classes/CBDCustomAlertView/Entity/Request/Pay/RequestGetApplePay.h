//
//  RequestGetApplePay.h
//  CarBaDa
//
//  Created by zjb on 16/3/24.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetApplePay : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *orderSerialId;
@property (nonatomic,copy) NSString *projectType;

-(instancetype)initWithProjectType:(NSString *)sProjectType;
@end
