//
//  ResponseGetDictionaryValue.h
//  CarBaDa
//
//  Created by zhang on 15/7/22.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetDictionaryValue : NSObject

@property (nonatomic,strong) NSArray *dictionaryList;
@property (nonatomic,strong) NSString *isSuccess;

@end

@interface dictionaryList : NSObject

@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *value;

@end
