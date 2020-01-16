//
//  RequestGetMyFollowHotel.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetMyFollowHotel : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *type;
@end
