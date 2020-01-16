//
//  RequestGetMessageCount.h
//  CarBaDa
//
//  Created by zjb on 16/10/18.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetMessageCount : TCTRequestObject
@property (nonatomic,copy) NSString *memberId;
@property (nonatomic,copy) NSString *recentGetTime;
@end
