//
//  ResponseGetFeeAppeal.h
//  CarBaDa
//
//  Created by mini on 2018/11/30.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseQuestionTypeList.h"

@interface ResponseGetFeeAppeal : NSObject

//是否已提交0 否  1 是
@property (nonatomic, strong) NSString *ifSubmited;
@property (nonatomic, strong) NSMutableArray *questionList;
@property (nonatomic, strong) NSMutableArray *appealList;

@end

//
//@interface questionList : NSObject
//
//@property (nonatomic, strong) NSString *question;
//@property (nonatomic, strong) NSString *answer;
//
//@end

@interface appealList : NSObject

@property (nonatomic, strong) NSString *appealContent;

@end
