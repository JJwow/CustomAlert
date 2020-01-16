//
//  ResponseGetHtmlVersion.h
//  CarBaDa
//
//  Created by zhang on 15/8/25.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetHtmlVersion : NSObject
@property (nonatomic,copy) NSString *code;
@property (nonatomic,copy) NSString *zipUrl;
@property (nonatomic,copy) NSString *htmlVersion;
@property (nonatomic,copy) NSString *isSuccess;
@property (nonatomic,copy) NSString *description;
@end
