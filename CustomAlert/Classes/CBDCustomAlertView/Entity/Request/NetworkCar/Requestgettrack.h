//
//  Requestgettrack.h
//  CarBaDa
//
//  Created by mini on 2018/7/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface Requestgettrack : TCTRequestObject


@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *driverId;
@property (nonatomic, copy) NSString *orderResource;

@end
