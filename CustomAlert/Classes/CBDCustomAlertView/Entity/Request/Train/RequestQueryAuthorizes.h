//
//  RequestQueryAuthorizes.h
//  CarBaDa
//
//  Created by 丁健 on 2018/4/3.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestQueryAuthorizes : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *aliUserId;//支付宝用户ID
@property (nonatomic, copy) NSString *cachedPayMethod;//客户端缓存支付方式（6:支付宝，7:微信）
@end
