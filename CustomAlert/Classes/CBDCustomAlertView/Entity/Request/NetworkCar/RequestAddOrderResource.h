//
//  RequestAddOrderResource.h
//  CarBaDa
//
//  Created by mini on 2019/4/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"
#import "RequestCreatePlaceOrder.h"

@interface RequestAddOrderResource : TCTRequestObject

@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *memberId; 
@property (nonatomic, strong) NSString *queryKey;  //资源接口返回的key
@property (nonatomic, strong) NSMutableArray *resourceList;  //

@end
