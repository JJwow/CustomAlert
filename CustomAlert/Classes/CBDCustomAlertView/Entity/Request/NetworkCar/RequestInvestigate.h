//
//  RequestInvestigate.h
//  CarBaDa
//
//  Created by mini on 2019/12/3.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestInvestigate : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *score;
@property (nonatomic, strong) NSString *serialId;
@property (nonatomic, strong) NSString *content;

@end

NS_ASSUME_NONNULL_END
