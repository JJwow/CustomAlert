//
//  ResponseGetCarpoolEvaluationDetail.h
//  CarBaDa
//
//  Created by fly on 2018/11/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Responsegetevaluationinfo.h"

@interface addComment : NSObject

@property (nonatomic, copy) NSString *star;

@property (nonatomic, copy) NSString *evalContent;

@property (nonatomic, strong) NSMutableArray *labelList;

@end

@interface ResponseGetCarpoolEvaluationDetail : NSObject

@property (nonatomic, copy) NSString *star;

@property (nonatomic, copy) NSString *evalContent;

@property (nonatomic, strong) NSMutableArray *labelList;

@property (nonatomic, strong) addComment *addComment;

@end
