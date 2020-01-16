//
//  ResponseGetTrainhelperactivity.h
//  CarBaDa
//
//  Created by zhaitong on 2018/11/6.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetTrainhelperactivity : NSObject
@property (nonatomic, strong) NSString *miniProgramCodeImage;//小程序二维码
@property (nonatomic, strong) NSString *miniProgramPath;//小程序分享路径
@property (nonatomic, strong) NSString *userName;//小程序原始ID
@end

NS_ASSUME_NONNULL_END
