//
//  ResponseGetCarpoolEvaluationInfo.h
//  CarBaDa
//
//  Created by fly on 2018/11/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Responsegetevaluationinfo.h"

@interface starLabelList : NSObject

@property (nonatomic, copy) NSString *star;

@property (nonatomic, strong) NSMutableArray *labelList;

@end

@interface ResponseGetCarpoolEvaluationInfo : NSObject

@property (nonatomic, copy) NSString *isSuccess;

@property (nonatomic, copy) NSString *rspType;

@property (nonatomic, strong) NSMutableArray *starLabelList;

@end
