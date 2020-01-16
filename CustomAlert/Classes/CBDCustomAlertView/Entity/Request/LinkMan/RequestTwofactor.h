//
//  RequestTwofactor.h
//  CarBaDa
//
//  Created by zhaitong on 2018/8/13.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTwofactor : TCTRequestObject
@property (nonatomic, strong) NSString *cardNo;//身份证号码
@property (nonatomic, strong) NSString *name;//姓名
@end
