//
//  ResponseGetCommonProblemList.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/25.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface commonProblemList : NSObject
@property (nonatomic, strong)NSString *cpId;
@property (nonatomic, strong)NSString *title;
@property (nonatomic, strong)NSString *isSuccess;
@property (nonatomic, strong)NSString *redirectUrl;

@end

@interface questionSortList : NSObject
@property (nonatomic, strong)NSString *sortId;//分类id
@property (nonatomic, strong)NSString *sortName;//分类名称
@property (nonatomic, strong)NSString *sortImg;//分类图片
@property (nonatomic, strong)NSString *projectType;

@end

@interface ResponseGetCommonProblemList : NSObject
@property (nonatomic, strong)NSArray *commonProblemList;
@property (nonatomic, strong)NSArray *questionSortList;//问题分类列表
@end
