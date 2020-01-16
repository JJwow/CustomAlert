//
//  RequestDeleteMessage.h
//  CarBaDa
//
//  Created by admin on 16/8/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestDeleteMessage : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *messageId;

@end
