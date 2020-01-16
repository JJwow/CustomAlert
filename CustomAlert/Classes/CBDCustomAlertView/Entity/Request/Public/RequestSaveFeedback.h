//
//  RequestSaveFeedback.h
//  CarBaDa
//
//  Created by Zayn on 15/7/8.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestSaveFeedback : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *mobileNo;
@property (nonatomic, copy) NSString *projectType;//项目ID
@property (nonatomic, copy) NSString *subject;//原因,限定100
@property (nonatomic, copy) NSString *content;//内容, 限定500
@end
