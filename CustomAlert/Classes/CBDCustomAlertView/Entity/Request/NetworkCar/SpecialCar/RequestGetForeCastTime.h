//
//  RequestGetForeCastTime.h
//  CarBaDa
//
//  Created by mini on 2018/9/7.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetForeCastTime : TCTRequestObject

@property (nonatomic, strong) NSString *dptLat;
@property (nonatomic, strong) NSString *dptLng;
@property (nonatomic, strong) NSString *arrLat;
@property (nonatomic, strong) NSString *arrLng;
@property (nonatomic, strong) NSString *dptType;

@end
