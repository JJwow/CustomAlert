//
//  ResponseLogin12306.h
//  CarBaDa
//
//  Created by 丁健 on 16/3/16.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

@interface ResponseLogin12306 : NSObject

@property (nonatomic, strong) NSString *accountName;//账户名
@property (nonatomic, strong) NSString *failMsg;//登录失败原因
@property (nonatomic, strong) NSString *isSuccess;//是否登录成功
@property (nonatomic, strong) NSString *isLoginSuccess;//是否返回成功
@property (nonatomic, strong) NSString *requestid;//请求唯一特征值 变更常旅信息时使用
@property (nonatomic, copy)NSString * isChecked;//13206时候核验  0：未核验 1：已核验
@property (nonatomic, strong) NSString *mobileNo;//核验手机
@property (nonatomic, strong) NSString *note;//登陆成功后内容提示
@property (nonatomic, copy) NSString *memberStatus;//会员状态 0:未开通 1：未激活2：已激活
@end
