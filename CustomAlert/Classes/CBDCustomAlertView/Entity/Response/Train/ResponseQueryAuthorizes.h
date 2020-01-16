//
//  ResponseQueryAuthorizes.h
//  CarBaDa
//
//  Created by 丁健 on 2018/4/3.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface authorizes : NSObject

@property (nonatomic, copy) NSString *hasAuthed;//是否已授权
@property (nonatomic, copy) NSString *payMethod;//代扣方式（6:支付宝，7:微信）

@end

@interface ResponseQueryAuthorizes : NSObject
@property (nonatomic, copy) NSArray *authorizes;//授权列表
@property (nonatomic, copy) NSString *cachedPayMethodHasAuthed;//客户端缓存支付方式是否已授权
@property (nonatomic, copy) NSString *defaultAuthedPayMethod;//默认已授权支付方式（6:支付宝，7:微信）
@property (nonatomic, copy) NSString *defaultUnAuthedPayMethod;//默认未授权支付方式（6:支付宝，7:微信）
@property (nonatomic, copy) NSString *showCellType;//显示的cell的类型（0：隐藏，1：未授权，2：已授权）-V370
@end

