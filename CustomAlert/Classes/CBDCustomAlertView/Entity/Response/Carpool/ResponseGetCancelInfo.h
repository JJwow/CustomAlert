//
//  ResponseGetCancelInfo.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/2/25.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetCancelInfo : NSObject

@property (nonatomic, copy) NSString *mainTitle;

@property (nonatomic, copy) NSString *subTitle;

@property (nonatomic, copy) NSString *driverStatus;

@end

NS_ASSUME_NONNULL_END
