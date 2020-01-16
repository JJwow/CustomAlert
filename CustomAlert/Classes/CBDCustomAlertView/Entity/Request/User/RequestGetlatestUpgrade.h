//
//  RequestGetlatestUpgrade.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/5.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetlatestUpgrade : TCTRequestObject

@property (nonatomic, copy)NSString *days;//天数范围(不传默认7)
@property (nonatomic, copy)NSString *memberId;//

@end

NS_ASSUME_NONNULL_END
