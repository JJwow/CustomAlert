//
//  RequestLogoutAccount.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestLogoutAccount : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *passWord;
@property (nonatomic, copy) NSString *tokenCode;
@property (nonatomic, copy) NSString *typeId;

@end

NS_ASSUME_NONNULL_END
