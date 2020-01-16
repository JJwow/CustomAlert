//
//  RequestGetGrabTime.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/7/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetGrabTime : TCTRequestObject
@property (nonatomic, copy) NSString *fromTime;//发车时间
@property (nonatomic, copy) NSString *queryKey;
@property (nonatomic, copy) NSString *trainNo;//车次号
@property (nonatomic, copy) NSString *fromStation;
@property (nonatomic, copy) NSString *toStation;
@property (nonatomic, copy) NSString *mainFromTime;//主发车时间    yyyy-MM-dd HH:mm
@end
