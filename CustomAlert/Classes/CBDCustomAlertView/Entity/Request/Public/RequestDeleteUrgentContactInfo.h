//
//  RequestDeleteUrgentContactInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2018/10/31.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestDeleteUrgentContactInfo : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *contactId;
@end

NS_ASSUME_NONNULL_END
