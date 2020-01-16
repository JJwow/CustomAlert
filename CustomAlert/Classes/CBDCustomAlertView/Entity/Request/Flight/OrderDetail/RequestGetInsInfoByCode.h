//
//  RequestGetInsInfoByCode.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/10/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetInsInfoByCode : TCTRequestObject

@property (nonatomic, strong) NSString *insCode;

@end

NS_ASSUME_NONNULL_END
