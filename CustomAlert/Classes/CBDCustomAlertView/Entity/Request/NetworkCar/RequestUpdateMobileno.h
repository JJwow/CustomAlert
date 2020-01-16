//
//  RequestUpdaTeMobileno.h
//  CarBaDa
//
//  Created by mini on 2018/12/29.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestUpdateMobileno : TCTRequestObject

@property (nonatomic, strong) NSString *mobileNo;
@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;


@end
