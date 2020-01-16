//
//  RequestGetBuStrainList.h
//  CarBaDa
//
//  Created by mini on 2019/5/24.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetBuStrainList : TCTRequestObject

@property (nonatomic, strong) NSString *projectType;
@property (nonatomic, strong) NSString *stationType; //2 接站；3 送站

@end
