//
//  RequestGetHtmlVersion.h
//  CarBaDa
//
//  Created by zhang on 15/8/25.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetHtmlVersion : TCTRequestObject
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *versionType;
@property (nonatomic,copy) NSString *htmlVersion;
@end
