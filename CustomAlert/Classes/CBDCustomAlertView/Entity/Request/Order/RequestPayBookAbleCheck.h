//
//  RequestPayBookAbleCheck.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/4/21.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestPayBookAbleCheck : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@end
