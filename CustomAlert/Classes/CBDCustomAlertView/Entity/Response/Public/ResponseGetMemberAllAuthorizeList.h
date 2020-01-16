//
//  ResponseGetMemberAllAuthorizeList.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface authorizelist : NSObject
@property (nonatomic,copy) NSString *payMethod;//代扣类型(1、支付宝，2、微信)
@property (nonatomic,copy) NSString *payMethodName;//代扣类型名称（支付宝、微信）
@property (nonatomic,copy) NSString *isAuthorize;
@property (nonatomic,copy) NSString *signNumber;//开通成功的签约流水
@property (nonatomic,copy) NSString *signAccountId;//签约账户ID
@property (nonatomic,copy) NSString *projectDes;//使用项目描述
@end

@interface ResponseGetMemberAllAuthorizeList : NSObject
@property (nonatomic, copy) NSArray *authorizelist;
@end

NS_ASSUME_NONNULL_END
