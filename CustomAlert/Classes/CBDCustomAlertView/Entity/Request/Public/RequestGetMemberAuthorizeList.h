//
//  RequestGetMemberAuthorizeList.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetMemberAuthorizeList : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *projectId;
@property (nonatomic, copy)NSString *aliUserId;
@property (nonatomic, copy)NSString *signAccountId;
@property (nonatomic, copy)NSString *payType;
@end

NS_ASSUME_NONNULL_END
