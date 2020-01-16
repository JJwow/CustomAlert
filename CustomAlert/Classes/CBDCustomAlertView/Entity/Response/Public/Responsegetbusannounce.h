//
//  Responsegetbusannounce.h
//  CarBaDa
//
//  Created by Alex on 15/7/1.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface announceList : NSObject
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *announce;
@property (nonatomic,strong) NSString *redirectUrl;
@property (nonatomic,strong) NSString *projectType;//混合公告预留
@end

@interface Responsegetbusannounce : NSObject
@property (nonatomic,strong) NSMutableArray *announceList;
@end
