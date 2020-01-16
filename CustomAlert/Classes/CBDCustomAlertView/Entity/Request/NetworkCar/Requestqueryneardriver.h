//
//  Requestqueryneardriver.h
//  CarBaDa
//
//  Created by mini on 2018/8/10.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface Requestqueryneardriver : TCTRequestObject

//出发城市ID
@property (nonatomic, strong) NSString *dptCityId;
//出发经度
@property (nonatomic, strong) NSString *dptLng;
@property (nonatomic, strong) NSString *dptLat;
//品牌类型
@property (nonatomic, strong) NSString *brandType;
//车型编码
@property (nonatomic, strong) NSString *ctCode;
@property (nonatomic, strong) NSString *brandId;

@property (nonatomic, strong) NSString *memberId;

@end
