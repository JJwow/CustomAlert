//
//  ResponseGetlatestUpgrade.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/5.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"



@interface changeRecord : NSObject

@property (nonatomic, copy) NSString *afterLevelId;//表更之后的等级ID
@property (nonatomic, copy) NSString *afterLevelName;//变更之后的等级名称
@property (nonatomic, copy) NSString *beforeLevelId;//表更之前的等级ID
@property (nonatomic, copy) NSString *beforeLevelName;//变更之前的等级名称
@property (nonatomic, copy) NSString *changeDate;//会员等级变成时间
@property (nonatomic, copy) NSString *changeDescription;//会员等级变更描述
@property (nonatomic, copy) NSString *memberId;//会员id

@end


@interface ResponseGetlatestUpgrade : TCTResponseObject

@property (nonatomic, copy) changeRecord *changeRecord;//等级

@end

