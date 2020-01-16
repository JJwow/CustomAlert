//
//  RequestGetCommendlLocation.h
//  CarBaDa
//
//  Created by mini on 2019/5/15.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetCommendlLocation : TCTRequestObject

@property (nonatomic, strong) NSString *gdLongitude;
@property (nonatomic, strong) NSString *gdLatitude;

@end
