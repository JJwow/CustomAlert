//
//  ResponseGetMemberAuthorizeList.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/27.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetMemberAuthorizeList : NSObject
@property (nonatomic, copy) NSString *authorizeEnable;//
@property (nonatomic, copy) NSArray *payitemlist;//

@property (nonatomic, copy) NSString *showCellType;//非接口给（0表示不展示、1表示展示未开通cell、2表示已开通cell）
@end

NS_ASSUME_NONNULL_END
