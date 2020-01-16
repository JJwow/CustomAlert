//
//  RequestLogin12306.h
//  CarBaDa
//
//  Created by 丁健 on 16/3/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestLogin12306 : TCTRequestObject

@property (nonatomic, copy) NSString *accountNo;//12306账号
@property (nonatomic, copy) NSString *accountPwd;//12306密码
@property (nonatomic, copy) NSString *memberId;//巴士管家memberId
@end

