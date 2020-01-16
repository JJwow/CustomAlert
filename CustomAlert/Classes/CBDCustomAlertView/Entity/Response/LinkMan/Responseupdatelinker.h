//
//  Responseupdatelinker.h
//  CarBaDa
//
//  Created by Alex on 15/6/19.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Responseaddlinker.h"
@interface Responseupdatelinker : NSObject

@property (nonatomic,strong) NSString *isSuccess;
@property (nonatomic,strong) NSString *description;
@property (nonatomic, copy) NSString *code;

@property (nonatomic,strong) linker *linker;
@end
