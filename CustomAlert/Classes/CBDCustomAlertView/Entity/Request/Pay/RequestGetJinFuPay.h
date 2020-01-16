//
//  RequestGetJinFuPay.h
//  CarBaDa
//
//  Created by zjb on 2017/10/10.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetJinFuPay : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *orderSerialId;
@property (nonatomic,copy) NSString *projectType;

-(instancetype)initWithProjectType:(NSString *)sProjectType;
@end
