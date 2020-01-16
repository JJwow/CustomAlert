//
//  RequestLocationCity.h
//  CarBaDa
//
//  Created by zjb on 16/7/7.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestLocationCity : TCTRequestObject
@property (nonatomic,copy) NSString *province;
@property (nonatomic,copy) NSString *city;
@property (nonatomic,copy) NSString *district;

@end
