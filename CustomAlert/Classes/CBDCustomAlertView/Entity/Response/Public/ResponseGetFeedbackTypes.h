//
//  ResponseGetFeedbackTypes.h
//  CarBaDa
//
//  Created by Zayn on 15/7/7.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseGetFeedbackTypes : TCTResponseObject
@property (nonatomic, strong) NSArray *dictionaryItemList;
@property (nonatomic, copy) NSString *isSuccess;

@end

@interface dictionaryItemList : NSObject
@property (nonatomic, copy) NSString *feedbackId;
@property (nonatomic, copy) NSString *feedbackName;
@property (nonatomic, copy) NSString *projectId;
@end
