//
//  RequestGetAirportSaleTime.h
//  CarBaDa
//
//  Created by 丁健 on 2019/5/16.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetAirportSaleTime : TCTRequestObject

@property (nonatomic, copy) NSString *projectType;//项目类型 1接机 2送机 4定制
@end

NS_ASSUME_NONNULL_END
