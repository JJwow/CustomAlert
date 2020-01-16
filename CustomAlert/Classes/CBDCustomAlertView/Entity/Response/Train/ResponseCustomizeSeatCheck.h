//
//  ResponseCustomizeSeatCheck.h
//  CarBaDa
//
//  Created by 丁健 on 2017/6/7.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCustomizeSeatCheck : NSObject
@property (nonatomic, copy) NSString *canOrder;//是否可以购票
@property (nonatomic, copy) NSString *note;//原因
@end
