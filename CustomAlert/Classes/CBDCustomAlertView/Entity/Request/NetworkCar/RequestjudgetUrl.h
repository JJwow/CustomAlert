//
//  RequestjudgetUrl.h
//  CarBaDa
//
//  Created by mini on 2019/6/20.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestjudgetUrl : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;

@end
