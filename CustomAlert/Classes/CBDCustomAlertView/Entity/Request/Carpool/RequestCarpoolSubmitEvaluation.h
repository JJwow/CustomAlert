//
//  RequestCarpoolSubmitEvaluation.h
//  CarBaDa
//
//  Created by fly on 2018/11/7.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestCarpoolSubmitEvaluation : TCTRequestObject

@property (nonatomic,copy) NSString *memberId;//会员Id

@property (nonatomic,copy) NSString *projectType;

@property (nonatomic,copy) NSString *orderSerial;

@property (nonatomic,copy) NSString *evalContent;

@property (nonatomic,copy) NSString *star;

@property (nonatomic,copy) NSMutableArray *labelList;

@end
