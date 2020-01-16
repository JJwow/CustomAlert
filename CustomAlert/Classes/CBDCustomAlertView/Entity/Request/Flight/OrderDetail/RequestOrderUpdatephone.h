//
//  RequestOrderUpdatephone.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/8/21.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestOrderUpdatephone : TCTRequestObject

@property (nonatomic, strong) NSString *orderSerialId;//改签单流水号
@property (nonatomic, strong) NSString *memberId;//会员的id
@property (nonatomic, strong) NSString *phone;//手机号

@end

NS_ASSUME_NONNULL_END
