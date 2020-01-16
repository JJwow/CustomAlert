//
//  RequestRefundbusticket.h
//  CarBaDa
//
//  Created by zhang on 15/9/10.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestRefundbusticket : TCTRequestObject
@property (nonatomic,copy) NSString *MemberId;
@property (nonatomic,copy) NSString *SerialId;
@property (nonatomic,copy) NSString *passSerialId;
@end
