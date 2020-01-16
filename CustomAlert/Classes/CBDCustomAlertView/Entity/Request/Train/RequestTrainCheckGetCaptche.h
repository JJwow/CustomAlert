//
//  RequestTrainCheckGetCaptche.h
//  CarBaDa
//
//  Created by zjb on 2017/6/29.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestTrainCheckGetCaptche : TCTRequestObject
@property (nonatomic,copy) NSString *mobileNo;
@property (nonatomic,copy) NSString *step;
@end
