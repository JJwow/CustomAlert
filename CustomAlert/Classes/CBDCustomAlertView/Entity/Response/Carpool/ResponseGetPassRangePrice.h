//
//  ResponseGetPassRangePrice.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetPassRangePrice : TCTResponseObject

@property (nonatomic, strong) NSString *passRangePrice;//超范围费
@property (nonatomic, strong) NSString *tipDescribe;//提示文案
@property (nonatomic, strong) NSString *ifPassRange;//是否超范围    0 否； 1 是；
@property (nonatomic, strong) NSString *isOpen;//是否开通服务    0 否；1 是

@end

NS_ASSUME_NONNULL_END
