//
//  ResponseGetFreeOrderShow.h
//  CarBaDa
//
//  Created by John on 2018/6/22.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetFreeOrderShow : NSObject

@property (nonatomic, strong)NSString *show;//是否显示免单cell（1、显示，0、不显示）

@property (nonatomic, strong)NSString *select;//是否默认购买（1、默认购买，0、不默认购买）

@property (nonatomic, strong)NSString *showSwitch;//是否可以默认购买（）


@property (nonatomic, strong)NSString *des;//外显文案

@end
