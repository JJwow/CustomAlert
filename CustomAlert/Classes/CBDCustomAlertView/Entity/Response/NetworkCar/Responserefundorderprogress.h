//
//  Responserefundorderprogress.h
//  CarBaDa
//
//  Created by mini on 2018/7/20.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetBusRefoundProgress.h"

@interface Responserefundorderprogress : NSObject

@property(nonatomic, copy) NSString *dedAmount;
@property(nonatomic, copy) NSString *refoundAmount;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, strong) NSArray *progressItems;

@end
