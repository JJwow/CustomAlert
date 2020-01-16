//
//  RequestCancelVipCard.h
//  CarBaDa
//
//  Created by zjb on 2019/1/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestCancelVipCard : TCTRequestObject
@property (nonatomic, copy) NSString *serialId;
@property (nonatomic, copy) NSString *memberId;

@end

NS_ASSUME_NONNULL_END
