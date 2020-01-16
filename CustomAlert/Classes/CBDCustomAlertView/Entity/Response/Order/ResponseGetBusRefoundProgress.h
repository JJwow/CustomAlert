//
//  ResponseGetBusRefoundProgress.h
//  CarBaDa
//
//  Created by zhang on 15/9/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface progressItems : NSObject
@property (nonatomic,copy)NSString *index;//   节点index
@property (nonatomic,copy)NSString *tagStyle;//index的样式（0：绿色；1：灰色；）
@property (nonatomic,copy)NSString *tagLineStyle;//index下面的线样式（0：绿色；1：灰色；）
@property (nonatomic,copy)NSString *title;//   节点标题
@property (nonatomic,copy)NSString *desp;//   节点描述

@end

@interface ResponseGetBusRefoundProgress : NSObject
@property (nonatomic,copy)NSString *title;
@property (nonatomic,strong)NSArray *progressItems;
@property (nonatomic,copy)NSString *refoundAmount;
@property (nonatomic,copy)NSString *dedAmount;
@end
