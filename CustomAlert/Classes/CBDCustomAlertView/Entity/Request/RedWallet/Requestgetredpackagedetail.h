//
//  Requestgetredpackagedetail.h
//  CarBaDa
//
//  Created by zhang on 15/7/2.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface Requestgetredpackagedetail : TCTRequestObject
@property (nonatomic,strong) NSString *memberId;
@property (nonatomic,strong) NSString *redPackageCode;
@end
