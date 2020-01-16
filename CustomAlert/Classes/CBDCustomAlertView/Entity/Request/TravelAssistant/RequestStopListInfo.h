//
//  RequestStopListInfo.h
//  CarBaDa
//
//  Created by mini on 2019/12/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestStopListInfo : TCTRequestObject

@property (nonatomic, copy) NSString *trainNo; //车次号
@property (nonatomic, copy) NSString *fromStation;//发车站
@property (nonatomic, copy) NSString *toStation; //到达站
@property (nonatomic, copy) NSString *trainDate;//发车日期

@end

NS_ASSUME_NONNULL_END
