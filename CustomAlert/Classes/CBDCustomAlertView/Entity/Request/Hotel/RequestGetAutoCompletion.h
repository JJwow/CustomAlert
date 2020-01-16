//
//  RequestGetAutoCompletion.h
//  CarBaDa
//
//  Created by Alex on 2017/4/24.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetAutoCompletion : TCTRequestObject
@property (nonatomic,copy) NSString *KeyWord;
@property (nonatomic,copy) NSString *CityId;
@property (nonatomic, copy) NSString *lon;
@property (nonatomic, copy) NSString *lat;

@end
