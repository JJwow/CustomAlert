//
//  ResponseQuestionTypeList.h
//  CarBaDa
//
//  Created by Vic_Li on 16/10/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface questionList : NSObject
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *question;
@property (nonatomic, copy) NSString *answer;

@property (nonatomic, assign) float norCellHeight;
@property (nonatomic, assign) float selectCellHeight;
@property (nonatomic, assign) BOOL isSelected;

@end

@interface questionTypeList : NSObject
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic, strong)NSArray *questionList;

@end

@interface ResponseQuestionTypeList : NSObject
@property (nonatomic, strong) NSArray *questionTypeList;

@end
