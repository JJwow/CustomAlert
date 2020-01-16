//
//  RequestHotLines.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestHotLines : TCTRequestObject

@property (nonatomic,copy) NSString *limitNum;//数量限制（0或不传则不限制）
@property (nonatomic,copy) NSString *locationId;//定位城市的id

@end
