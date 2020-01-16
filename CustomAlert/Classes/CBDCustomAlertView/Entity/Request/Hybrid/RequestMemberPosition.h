//
//  RequestMemberPosition.h
//  CarBaDa
//
//  Created by 丁健 on 17/1/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestMemberPosition : TCTRequestObject
@property (nonatomic, copy) NSString *lat;//纬度
@property (nonatomic, copy) NSString *lng;//经度
@property (nonatomic, copy) NSString *memberId;//会员Id	加密的
@end
