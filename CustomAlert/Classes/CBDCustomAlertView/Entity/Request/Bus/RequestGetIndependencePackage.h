//
//  RequestGetIndependencePackage.h
//  CarBaDa
//
//  Created by John on 2018/6/19.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetIndependencePackage : TCTRequestObject
@property (nonatomic, strong) NSString *projectType;//项目类型
@property (nonatomic, strong) NSString *price;//票单价
@end
