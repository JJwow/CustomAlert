//
//  RequestQueryNearallDriver.h
//  CarBaDa
//
//  Created by mini on 2019/2/25.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestQueryNearallDriver : TCTRequestObject

@property (nonatomic, strong) NSString *dptAdCode; //出发城市code
@property (nonatomic, strong) NSString *dptLng; // 出发经度
@property (nonatomic, strong) NSString *dptLat; // 出发纬度


@end
