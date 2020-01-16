//
//  Requestgetlinkerinfos.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetlinkerinfos : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic, copy) NSString *isMultCertType;//是否支持多证件，1：支持；0：不支持
@property (nonatomic, copy) NSString *identityType;//身份类型，0-无；1-学生；2-军人；3-残疾
@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, copy) NSString *supportCertType;//支持的证件类型，多个英文逗号隔开
@end
