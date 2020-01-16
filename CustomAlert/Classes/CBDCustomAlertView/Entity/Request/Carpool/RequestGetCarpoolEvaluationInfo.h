//
//  RequestGetCarpoolEvaluationInfo.h
//  CarBaDa
//
//  Created by fly on 2018/11/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetCarpoolEvaluationInfo : TCTRequestObject

@property (nonatomic,copy) NSString *memberId;//会员Id

@property (nonatomic,copy) NSString *projectType;

@end
