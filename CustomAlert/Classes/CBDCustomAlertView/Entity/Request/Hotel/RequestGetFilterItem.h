//
//  RequestGetFilterItem.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/6/14.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetFilterItem : TCTRequestObject

@property (nonatomic, copy) NSString *gpsCityId;//定位城市Id
@property (nonatomic, copy) NSString *hotelCityId;//入住城市ID

@end
