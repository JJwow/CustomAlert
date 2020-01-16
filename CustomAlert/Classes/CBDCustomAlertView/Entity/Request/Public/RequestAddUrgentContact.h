//
//  RequestAddUrgentContact.h
//  CarBaDa
//
//  Created by 丁健 on 2018/11/1.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestAddUrgentContact : TCTRequestObject
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *contactName;
@property (nonatomic, copy)NSString *contactPhone;
@property (nonatomic, copy)NSString *contactId;//联系人ID（新增时不传，编辑时必传
@end

NS_ASSUME_NONNULL_END
