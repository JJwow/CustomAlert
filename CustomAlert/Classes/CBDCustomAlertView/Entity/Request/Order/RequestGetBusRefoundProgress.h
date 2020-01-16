//
//  RequestGetBusRefoundProgress.h
//  CarBaDa
//
//  Created by zhang on 15/9/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetBusRefoundProgress : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *serialId;
@property (nonatomic,copy) NSString *passSerialId;
@end
