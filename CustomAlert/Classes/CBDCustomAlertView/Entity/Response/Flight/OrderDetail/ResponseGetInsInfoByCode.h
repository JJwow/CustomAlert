//
//  ResponseGetInsInfoByCode.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/10/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface insInfo : NSObject

@property (nonatomic, strong) NSString *insCode;            //保险代码
@property (nonatomic, strong) NSString *insShowTitle;       //保险外显名称
@property (nonatomic, strong) NSString *insSubtitle;        //保险副标题
@property (nonatomic, strong) NSString *insPrice;           //保险价格
@property (nonatomic, strong) NSString *coverage;           //保额(单位万,小数点后数字省去即精确到个位向下取整)
@property (nonatomic, strong) NSString *claimAmount;        //赔偿金额(取延误类型的最大值)
@property (nonatomic, strong) NSString *insNote;            //保险说明
@end

@interface ResponseGetInsInfoByCode : TCTResponseObject

@property (nonatomic, strong) insInfo *insInfo;

@end

NS_ASSUME_NONNULL_END
