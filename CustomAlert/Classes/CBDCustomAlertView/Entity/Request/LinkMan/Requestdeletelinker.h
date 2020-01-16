//
//  Requestdeletelinker.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestdeletelinker : TCTRequestObject
@property (nonatomic,strong) NSString *LinkerId;
@property (nonatomic,strong) NSString *MemberId;
@end
