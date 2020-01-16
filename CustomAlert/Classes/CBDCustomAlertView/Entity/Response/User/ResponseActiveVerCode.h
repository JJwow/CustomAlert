//
//  ResponseActiveVerCode.h
//  CarBaDa
//
//  Created by Vic_Li on 16/8/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseActiveVerCode : NSObject
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *recipient;
@property (nonatomic, copy) NSString *sMSContent;
@property (nonatomic, copy) NSString *des;//原因
@end
