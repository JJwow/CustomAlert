//
//  RequestUnsignMemberAuthorize.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestUnsignMemberAuthorize : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *signNumber;
@property (nonatomic, copy)NSString *payMethod;

@end

NS_ASSUME_NONNULL_END
