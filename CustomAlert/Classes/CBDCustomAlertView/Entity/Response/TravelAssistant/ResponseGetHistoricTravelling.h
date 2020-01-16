//
//  ResponseGetHistoricTravelling.h
//  CarBaDa
//
//  Created by mini on 2019/8/28.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetRecentlyTravelling.h"


NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetHistoricTravelling : NSObject

@property (nonatomic, strong) NSMutableArray *travellingList;

@end

NS_ASSUME_NONNULL_END
