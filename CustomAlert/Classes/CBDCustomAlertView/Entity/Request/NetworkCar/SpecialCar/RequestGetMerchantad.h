//
//  RequestGetMerchantad.h
//  CarBaDa
//
//  Created by mini on 2019/3/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetMerchantad : TCTRequestObject

@property (nonatomic, strong) NSString *position;  //广告位
@property (nonatomic, strong) NSMutableArray *adRules;  //规则


@end

@interface adRules : NSObject

@property (nonatomic, strong) NSString *key;  
@property (nonatomic, strong) NSString *value;

- (adRules*)initWithKey:(NSString*)key value:(NSString*)value;
@end
