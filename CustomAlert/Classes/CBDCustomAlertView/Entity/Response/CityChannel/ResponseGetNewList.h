//
//  ResponseGetNewList.h
//  CarBaDa
//
//  Created by Vic_Li on 2018/1/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetNewList : NSObject
@property (nonatomic, strong) NSArray *newsList;//资讯列表

@end

@interface newsList : NSObject
@property (nonatomic, copy) NSString *title;//标题
@property (nonatomic, copy) NSString *describe;//摘要
@property (nonatomic, copy) NSString *newsId;//咨询ID
@property (nonatomic, copy) NSString *thum;//缩略图
@property (nonatomic, copy) NSString *recommend;//是否推荐（0 否；1 是）

@property (nonatomic, copy) NSString *url;//跳转文章地址
@end
