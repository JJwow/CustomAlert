//
//  RequestGetSignMade.h
//  CarBaDa
//
//  Created by 丁健 on 2018/4/9.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetSignMade : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *payType;//支付类型
@property (nonatomic, copy) NSString *projectCode;//项目类型
@property (nonatomic, copy) NSString *payAccountId;
@property (nonatomic, copy) NSString *returnUrl;//回调地址

@end


