//
//  Responsegetpath.h
//  CarBaDa
//
//  Created by mini on 2018/7/23.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Responsegetpath : NSObject

@property (nonatomic, strong) NSArray *pathList;

@end


@interface pathList : NSObject

@property (nonatomic, copy) NSString * lng;
@property (nonatomic, copy) NSString * lat;
@end



@interface pathModel : NSObject

@property (nonatomic, copy) NSString * mixNum;
@property (nonatomic, copy) NSString * tag;


@end
