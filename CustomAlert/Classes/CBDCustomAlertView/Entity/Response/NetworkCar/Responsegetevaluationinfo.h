//
//  Responsegetevaluationinfo.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Responsegetevaluationinfo : NSObject

@property (nonatomic, strong) NSArray *starLabelDOList;

@end

@interface starLabelDOList : NSObject

@property (nonatomic, strong)  NSString *star;
@property (nonatomic, strong) NSArray *labelList;

@end


@interface labelList : NSObject
@property (nonatomic, strong) NSString *labelId;
@property (nonatomic, strong) NSString *labelName;
@property (nonatomic, strong) NSString *LabelId;
@property (nonatomic, strong) NSString *LabelName;

//汽车票车次列表标签专用
@property (nonatomic, strong) NSString *title;//标题
@property (nonatomic, strong) NSString *subTitle;//副标题
@property (nonatomic, strong) NSString *labelType;//是否显示电话号码
@property (nonatomic, strong) NSString *desp;//说明
@end
