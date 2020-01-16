//
//  RequestLineServiceAreaList.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/4/8.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestLineServiceAreaList : TCTRequestObject

@property (nonatomic, copy) NSString *resourceId;//资源id
@property (nonatomic, copy) NSString *cityName;//城市名

@end

NS_ASSUME_NONNULL_END
