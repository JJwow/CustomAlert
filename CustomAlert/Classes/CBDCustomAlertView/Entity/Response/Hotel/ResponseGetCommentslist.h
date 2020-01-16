//
//  ResponseGetcommentslist.h
//  CarBaDa
//
//  Created by likaikun on 2017/7/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "pageInfo.h"

@interface ResponseGetCommentslist : TCTResponseObject

@property (nonatomic, strong) NSMutableArray *dpList;//点评列表
@property (nonatomic, copy) NSString *isSuccess;//
@property (nonatomic, copy) NSArray *lab;//语意标签
@property (nonatomic, copy) NSString *score;//评分
@property (nonatomic, copy) NSString *scorems;//评分描述
@property (nonatomic, copy) NSString *serveScore;//分数（各项逗号隔开）
@property (nonatomic, strong) pageInfo *pageinfo;

@end

@interface dpList : NSObject

@property (nonatomic, copy) NSString *content;//点评内容
@property (nonatomic, copy) NSString *date;//点评时间
@property (nonatomic, copy) NSString *dpResourcedes;//点评资源描述
@property (nonatomic, copy) NSString *rating;//好评、中评、差评
@property (nonatomic, copy) NSString *roomType;//房间类型
@property (nonatomic, copy) NSString *tripPurName;//出游目的
@property (nonatomic, copy) NSString *userAvatar;//用户头像
@property (nonatomic, copy) NSString *userName;//用户名称
@property (nonatomic, copy) NSString *images;//点评图片（逗号分隔）
@property (nonatomic, strong) NSArray *highLightList;//高亮
@property (nonatomic, copy) NSString *highLightColor;


@end

@interface lab : NSObject

@property (nonatomic, copy) NSString *labId;//标签Id
@property (nonatomic, copy) NSString *labName;//标签名称
@property (nonatomic, copy) NSString *labNum;//该标签下的点评数量

@end
