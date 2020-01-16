//
//  RequestRecommendcarbyorder.h
//  CarBaDa
//
//  Created by mini on 2019/4/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestRecommendcarbyorder : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *recommendNodeType;

@end
