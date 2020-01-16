//
//  RequestOrderCheckInfo.h
//  CarBaDa
//
//  Created by zjb on 2019/5/23.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestOrderCheckInfo : TCTRequestObject
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *memberId;
@end

NS_ASSUME_NONNULL_END
